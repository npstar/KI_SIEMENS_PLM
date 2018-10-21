// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: brain_action_proto.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from brain_action_proto.proto</summary>
public static partial class BrainActionProtoReflection {

  #region Descriptor
  /// <summary>File descriptor for brain_action_proto.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static BrainActionProtoReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChhicmFpbl9hY3Rpb25fcHJvdG8ucHJvdG8igAEKEEJyYWluQWN0aW9uUHJv",
          "dG8SEQoJYnJhaW5OYW1lGAEgASgJEhkKEWFjdGlvbnNfY29udGlub3VzGAIg",
          "AygCEhgKEGFjdGlvbnNfZGlzY3JldGUYAyADKAUSFAoMcmVzZXRfbmVlZGVk",
          "GAQgASgFEg4KBmlzRG9uZRgFIAEoBWIGcHJvdG8z"));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
          new pbr::GeneratedClrTypeInfo(typeof(global::BrainActionProto), global::BrainActionProto.Parser, new[]{ "BrainName", "ActionsContinous", "ActionsDiscrete", "ResetNeeded", "IsDone" }, null, null, null)
        }));
  }
  #endregion

}
#region Messages
public sealed partial class BrainActionProto : pb::IMessage<BrainActionProto> {
  private static readonly pb::MessageParser<BrainActionProto> _parser = new pb::MessageParser<BrainActionProto>(() => new BrainActionProto());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<BrainActionProto> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::BrainActionProtoReflection.Descriptor.MessageTypes[0]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainActionProto() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainActionProto(BrainActionProto other) : this() {
    brainName_ = other.brainName_;
    actionsContinous_ = other.actionsContinous_.Clone();
    actionsDiscrete_ = other.actionsDiscrete_.Clone();
    resetNeeded_ = other.resetNeeded_;
    isDone_ = other.isDone_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainActionProto Clone() {
    return new BrainActionProto(this);
  }

  /// <summary>Field number for the "brainName" field.</summary>
  public const int BrainNameFieldNumber = 1;
  private string brainName_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string BrainName {
    get { return brainName_; }
    set {
      brainName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  /// <summary>Field number for the "actions_continous" field.</summary>
  public const int ActionsContinousFieldNumber = 2;
  private static readonly pb::FieldCodec<float> _repeated_actionsContinous_codec
      = pb::FieldCodec.ForFloat(18);
  private readonly pbc::RepeatedField<float> actionsContinous_ = new pbc::RepeatedField<float>();
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public pbc::RepeatedField<float> ActionsContinous {
    get { return actionsContinous_; }
  }

  /// <summary>Field number for the "actions_discrete" field.</summary>
  public const int ActionsDiscreteFieldNumber = 3;
  private static readonly pb::FieldCodec<int> _repeated_actionsDiscrete_codec
      = pb::FieldCodec.ForInt32(26);
  private readonly pbc::RepeatedField<int> actionsDiscrete_ = new pbc::RepeatedField<int>();
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public pbc::RepeatedField<int> ActionsDiscrete {
    get { return actionsDiscrete_; }
  }

  /// <summary>Field number for the "reset_needed" field.</summary>
  public const int ResetNeededFieldNumber = 4;
  private int resetNeeded_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ResetNeeded {
    get { return resetNeeded_; }
    set {
      resetNeeded_ = value;
    }
  }

  /// <summary>Field number for the "isDone" field.</summary>
  public const int IsDoneFieldNumber = 5;
  private int isDone_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int IsDone {
    get { return isDone_; }
    set {
      isDone_ = value;
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as BrainActionProto);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(BrainActionProto other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (BrainName != other.BrainName) return false;
    if(!actionsContinous_.Equals(other.actionsContinous_)) return false;
    if(!actionsDiscrete_.Equals(other.actionsDiscrete_)) return false;
    if (ResetNeeded != other.ResetNeeded) return false;
    if (IsDone != other.IsDone) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (BrainName.Length != 0) hash ^= BrainName.GetHashCode();
    hash ^= actionsContinous_.GetHashCode();
    hash ^= actionsDiscrete_.GetHashCode();
    if (ResetNeeded != 0) hash ^= ResetNeeded.GetHashCode();
    if (IsDone != 0) hash ^= IsDone.GetHashCode();
    if (_unknownFields != null) {
      hash ^= _unknownFields.GetHashCode();
    }
    return hash;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override string ToString() {
    return pb::JsonFormatter.ToDiagnosticString(this);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void WriteTo(pb::CodedOutputStream output) {
    if (BrainName.Length != 0) {
      output.WriteRawTag(10);
      output.WriteString(BrainName);
    }
    actionsContinous_.WriteTo(output, _repeated_actionsContinous_codec);
    actionsDiscrete_.WriteTo(output, _repeated_actionsDiscrete_codec);
    if (ResetNeeded != 0) {
      output.WriteRawTag(32);
      output.WriteInt32(ResetNeeded);
    }
    if (IsDone != 0) {
      output.WriteRawTag(40);
      output.WriteInt32(IsDone);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (BrainName.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(BrainName);
    }
    size += actionsContinous_.CalculateSize(_repeated_actionsContinous_codec);
    size += actionsDiscrete_.CalculateSize(_repeated_actionsDiscrete_codec);
    if (ResetNeeded != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ResetNeeded);
    }
    if (IsDone != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(IsDone);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(BrainActionProto other) {
    if (other == null) {
      return;
    }
    if (other.BrainName.Length != 0) {
      BrainName = other.BrainName;
    }
    actionsContinous_.Add(other.actionsContinous_);
    actionsDiscrete_.Add(other.actionsDiscrete_);
    if (other.ResetNeeded != 0) {
      ResetNeeded = other.ResetNeeded;
    }
    if (other.IsDone != 0) {
      IsDone = other.IsDone;
    }
    _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(pb::CodedInputStream input) {
    uint tag;
    while ((tag = input.ReadTag()) != 0) {
      switch(tag) {
        default:
          _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
          break;
        case 10: {
          BrainName = input.ReadString();
          break;
        }
        case 18:
        case 21: {
          actionsContinous_.AddEntriesFrom(input, _repeated_actionsContinous_codec);
          break;
        }
        case 26:
        case 24: {
          actionsDiscrete_.AddEntriesFrom(input, _repeated_actionsDiscrete_codec);
          break;
        }
        case 32: {
          ResetNeeded = input.ReadInt32();
          break;
        }
        case 40: {
          IsDone = input.ReadInt32();
          break;
        }
      }
    }
  }

}

#endregion


#endregion Designer generated code
