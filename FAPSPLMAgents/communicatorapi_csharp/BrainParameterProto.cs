// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: brain_parameter_proto.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from brain_parameter_proto.proto</summary>
public static partial class BrainParameterProtoReflection {

  #region Descriptor
  /// <summary>File descriptor for brain_parameter_proto.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static BrainParameterProtoReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChticmFpbl9wYXJhbWV0ZXJfcHJvdG8ucHJvdG8aF2FjdGlvbl90eXBlX3By",
          "b3RvLnByb3RvGhZzcGFjZV90eXBlX3Byb3RvLnByb3RvIscCChRCcmFpblBh",
          "cmFtZXRlcnNQcm90bxIRCglzdGF0ZVNpemUYASABKAUSEgoKYWN0aW9uU2l6",
          "ZRgCIAEoBRIXCg9vYnNlcnZhdGlvblNpemUYAyABKAUSEgoKbWVtb3J5U2l6",
          "ZRgEIAEoBRIbChNjYW1lcmFSZXNvbHV0aW9uc19IGAUgASgFEhsKE2NhbWVy",
          "YVJlc29sdXRpb25zX1cYBiABKAUSGgoSYWN0aW9uRGVzY3JpcHRpb25zGAcg",
          "AygJEh4KFnN0YXRlU3BhY2VEZXNjcmlwdGlvbnMYCCADKAkSKQoPYWN0aW9u",
          "U3BhY2VUeXBlGAkgASgOMhAuQWN0aW9uVHlwZVByb3RvEicKDnN0YXRlU3Bh",
          "Y2VUeXBlGAogASgOMg8uU3BhY2VUeXBlUHJvdG8SEQoJYnJhaW5OYW1lGAsg",
          "ASgJYgZwcm90bzM="));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { global::ActionTypeProtoReflection.Descriptor, global::SpaceTypeProtoReflection.Descriptor, },
        new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
          new pbr::GeneratedClrTypeInfo(typeof(global::BrainParametersProto), global::BrainParametersProto.Parser, new[]{ "StateSize", "ActionSize", "ObservationSize", "MemorySize", "CameraResolutionsH", "CameraResolutionsW", "ActionDescriptions", "StateSpaceDescriptions", "ActionSpaceType", "StateSpaceType", "BrainName" }, null, null, null)
        }));
  }
  #endregion

}
#region Messages
public sealed partial class BrainParametersProto : pb::IMessage<BrainParametersProto> {
  private static readonly pb::MessageParser<BrainParametersProto> _parser = new pb::MessageParser<BrainParametersProto>(() => new BrainParametersProto());
  private pb::UnknownFieldSet _unknownFields;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pb::MessageParser<BrainParametersProto> Parser { get { return _parser; } }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public static pbr::MessageDescriptor Descriptor {
    get { return global::BrainParameterProtoReflection.Descriptor.MessageTypes[0]; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  pbr::MessageDescriptor pb::IMessage.Descriptor {
    get { return Descriptor; }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainParametersProto() {
    OnConstruction();
  }

  partial void OnConstruction();

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainParametersProto(BrainParametersProto other) : this() {
    stateSize_ = other.stateSize_;
    actionSize_ = other.actionSize_;
    observationSize_ = other.observationSize_;
    memorySize_ = other.memorySize_;
    cameraResolutionsH_ = other.cameraResolutionsH_;
    cameraResolutionsW_ = other.cameraResolutionsW_;
    actionDescriptions_ = other.actionDescriptions_.Clone();
    stateSpaceDescriptions_ = other.stateSpaceDescriptions_.Clone();
    actionSpaceType_ = other.actionSpaceType_;
    stateSpaceType_ = other.stateSpaceType_;
    brainName_ = other.brainName_;
    _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public BrainParametersProto Clone() {
    return new BrainParametersProto(this);
  }

  /// <summary>Field number for the "stateSize" field.</summary>
  public const int StateSizeFieldNumber = 1;
  private int stateSize_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int StateSize {
    get { return stateSize_; }
    set {
      stateSize_ = value;
    }
  }

  /// <summary>Field number for the "actionSize" field.</summary>
  public const int ActionSizeFieldNumber = 2;
  private int actionSize_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ActionSize {
    get { return actionSize_; }
    set {
      actionSize_ = value;
    }
  }

  /// <summary>Field number for the "observationSize" field.</summary>
  public const int ObservationSizeFieldNumber = 3;
  private int observationSize_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int ObservationSize {
    get { return observationSize_; }
    set {
      observationSize_ = value;
    }
  }

  /// <summary>Field number for the "memorySize" field.</summary>
  public const int MemorySizeFieldNumber = 4;
  private int memorySize_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int MemorySize {
    get { return memorySize_; }
    set {
      memorySize_ = value;
    }
  }

  /// <summary>Field number for the "cameraResolutions_H" field.</summary>
  public const int CameraResolutionsHFieldNumber = 5;
  private int cameraResolutionsH_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CameraResolutionsH {
    get { return cameraResolutionsH_; }
    set {
      cameraResolutionsH_ = value;
    }
  }

  /// <summary>Field number for the "cameraResolutions_W" field.</summary>
  public const int CameraResolutionsWFieldNumber = 6;
  private int cameraResolutionsW_;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CameraResolutionsW {
    get { return cameraResolutionsW_; }
    set {
      cameraResolutionsW_ = value;
    }
  }

  /// <summary>Field number for the "actionDescriptions" field.</summary>
  public const int ActionDescriptionsFieldNumber = 7;
  private static readonly pb::FieldCodec<string> _repeated_actionDescriptions_codec
      = pb::FieldCodec.ForString(58);
  private readonly pbc::RepeatedField<string> actionDescriptions_ = new pbc::RepeatedField<string>();
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public pbc::RepeatedField<string> ActionDescriptions {
    get { return actionDescriptions_; }
  }

  /// <summary>Field number for the "stateSpaceDescriptions" field.</summary>
  public const int StateSpaceDescriptionsFieldNumber = 8;
  private static readonly pb::FieldCodec<string> _repeated_stateSpaceDescriptions_codec
      = pb::FieldCodec.ForString(66);
  private readonly pbc::RepeatedField<string> stateSpaceDescriptions_ = new pbc::RepeatedField<string>();
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public pbc::RepeatedField<string> StateSpaceDescriptions {
    get { return stateSpaceDescriptions_; }
  }

  /// <summary>Field number for the "actionSpaceType" field.</summary>
  public const int ActionSpaceTypeFieldNumber = 9;
  private global::ActionTypeProto actionSpaceType_ = 0;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public global::ActionTypeProto ActionSpaceType {
    get { return actionSpaceType_; }
    set {
      actionSpaceType_ = value;
    }
  }

  /// <summary>Field number for the "stateSpaceType" field.</summary>
  public const int StateSpaceTypeFieldNumber = 10;
  private global::SpaceTypeProto stateSpaceType_ = 0;
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public global::SpaceTypeProto StateSpaceType {
    get { return stateSpaceType_; }
    set {
      stateSpaceType_ = value;
    }
  }

  /// <summary>Field number for the "brainName" field.</summary>
  public const int BrainNameFieldNumber = 11;
  private string brainName_ = "";
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public string BrainName {
    get { return brainName_; }
    set {
      brainName_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override bool Equals(object other) {
    return Equals(other as BrainParametersProto);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public bool Equals(BrainParametersProto other) {
    if (ReferenceEquals(other, null)) {
      return false;
    }
    if (ReferenceEquals(other, this)) {
      return true;
    }
    if (StateSize != other.StateSize) return false;
    if (ActionSize != other.ActionSize) return false;
    if (ObservationSize != other.ObservationSize) return false;
    if (MemorySize != other.MemorySize) return false;
    if (CameraResolutionsH != other.CameraResolutionsH) return false;
    if (CameraResolutionsW != other.CameraResolutionsW) return false;
    if(!actionDescriptions_.Equals(other.actionDescriptions_)) return false;
    if(!stateSpaceDescriptions_.Equals(other.stateSpaceDescriptions_)) return false;
    if (ActionSpaceType != other.ActionSpaceType) return false;
    if (StateSpaceType != other.StateSpaceType) return false;
    if (BrainName != other.BrainName) return false;
    return Equals(_unknownFields, other._unknownFields);
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public override int GetHashCode() {
    int hash = 1;
    if (StateSize != 0) hash ^= StateSize.GetHashCode();
    if (ActionSize != 0) hash ^= ActionSize.GetHashCode();
    if (ObservationSize != 0) hash ^= ObservationSize.GetHashCode();
    if (MemorySize != 0) hash ^= MemorySize.GetHashCode();
    if (CameraResolutionsH != 0) hash ^= CameraResolutionsH.GetHashCode();
    if (CameraResolutionsW != 0) hash ^= CameraResolutionsW.GetHashCode();
    hash ^= actionDescriptions_.GetHashCode();
    hash ^= stateSpaceDescriptions_.GetHashCode();
    if (ActionSpaceType != 0) hash ^= ActionSpaceType.GetHashCode();
    if (StateSpaceType != 0) hash ^= StateSpaceType.GetHashCode();
    if (BrainName.Length != 0) hash ^= BrainName.GetHashCode();
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
    if (StateSize != 0) {
      output.WriteRawTag(8);
      output.WriteInt32(StateSize);
    }
    if (ActionSize != 0) {
      output.WriteRawTag(16);
      output.WriteInt32(ActionSize);
    }
    if (ObservationSize != 0) {
      output.WriteRawTag(24);
      output.WriteInt32(ObservationSize);
    }
    if (MemorySize != 0) {
      output.WriteRawTag(32);
      output.WriteInt32(MemorySize);
    }
    if (CameraResolutionsH != 0) {
      output.WriteRawTag(40);
      output.WriteInt32(CameraResolutionsH);
    }
    if (CameraResolutionsW != 0) {
      output.WriteRawTag(48);
      output.WriteInt32(CameraResolutionsW);
    }
    actionDescriptions_.WriteTo(output, _repeated_actionDescriptions_codec);
    stateSpaceDescriptions_.WriteTo(output, _repeated_stateSpaceDescriptions_codec);
    if (ActionSpaceType != 0) {
      output.WriteRawTag(72);
      output.WriteEnum((int) ActionSpaceType);
    }
    if (StateSpaceType != 0) {
      output.WriteRawTag(80);
      output.WriteEnum((int) StateSpaceType);
    }
    if (BrainName.Length != 0) {
      output.WriteRawTag(90);
      output.WriteString(BrainName);
    }
    if (_unknownFields != null) {
      _unknownFields.WriteTo(output);
    }
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public int CalculateSize() {
    int size = 0;
    if (StateSize != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(StateSize);
    }
    if (ActionSize != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ActionSize);
    }
    if (ObservationSize != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(ObservationSize);
    }
    if (MemorySize != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(MemorySize);
    }
    if (CameraResolutionsH != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(CameraResolutionsH);
    }
    if (CameraResolutionsW != 0) {
      size += 1 + pb::CodedOutputStream.ComputeInt32Size(CameraResolutionsW);
    }
    size += actionDescriptions_.CalculateSize(_repeated_actionDescriptions_codec);
    size += stateSpaceDescriptions_.CalculateSize(_repeated_stateSpaceDescriptions_codec);
    if (ActionSpaceType != 0) {
      size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) ActionSpaceType);
    }
    if (StateSpaceType != 0) {
      size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) StateSpaceType);
    }
    if (BrainName.Length != 0) {
      size += 1 + pb::CodedOutputStream.ComputeStringSize(BrainName);
    }
    if (_unknownFields != null) {
      size += _unknownFields.CalculateSize();
    }
    return size;
  }

  [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
  public void MergeFrom(BrainParametersProto other) {
    if (other == null) {
      return;
    }
    if (other.StateSize != 0) {
      StateSize = other.StateSize;
    }
    if (other.ActionSize != 0) {
      ActionSize = other.ActionSize;
    }
    if (other.ObservationSize != 0) {
      ObservationSize = other.ObservationSize;
    }
    if (other.MemorySize != 0) {
      MemorySize = other.MemorySize;
    }
    if (other.CameraResolutionsH != 0) {
      CameraResolutionsH = other.CameraResolutionsH;
    }
    if (other.CameraResolutionsW != 0) {
      CameraResolutionsW = other.CameraResolutionsW;
    }
    actionDescriptions_.Add(other.actionDescriptions_);
    stateSpaceDescriptions_.Add(other.stateSpaceDescriptions_);
    if (other.ActionSpaceType != 0) {
      ActionSpaceType = other.ActionSpaceType;
    }
    if (other.StateSpaceType != 0) {
      StateSpaceType = other.StateSpaceType;
    }
    if (other.BrainName.Length != 0) {
      BrainName = other.BrainName;
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
        case 8: {
          StateSize = input.ReadInt32();
          break;
        }
        case 16: {
          ActionSize = input.ReadInt32();
          break;
        }
        case 24: {
          ObservationSize = input.ReadInt32();
          break;
        }
        case 32: {
          MemorySize = input.ReadInt32();
          break;
        }
        case 40: {
          CameraResolutionsH = input.ReadInt32();
          break;
        }
        case 48: {
          CameraResolutionsW = input.ReadInt32();
          break;
        }
        case 58: {
          actionDescriptions_.AddEntriesFrom(input, _repeated_actionDescriptions_codec);
          break;
        }
        case 66: {
          stateSpaceDescriptions_.AddEntriesFrom(input, _repeated_stateSpaceDescriptions_codec);
          break;
        }
        case 72: {
          actionSpaceType_ = (global::ActionTypeProto) input.ReadEnum();
          break;
        }
        case 80: {
          stateSpaceType_ = (global::SpaceTypeProto) input.ReadEnum();
          break;
        }
        case 90: {
          BrainName = input.ReadString();
          break;
        }
      }
    }
  }

}

#endregion


#endregion Designer generated code
