// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: space_type_proto.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
/// <summary>Holder for reflection information generated from space_type_proto.proto</summary>
public static partial class SpaceTypeProtoReflection {

  #region Descriptor
  /// <summary>File descriptor for space_type_proto.proto</summary>
  public static pbr::FileDescriptor Descriptor {
    get { return descriptor; }
  }
  private static pbr::FileDescriptor descriptor;

  static SpaceTypeProtoReflection() {
    byte[] descriptorData = global::System.Convert.FromBase64String(
        string.Concat(
          "ChZzcGFjZV90eXBlX3Byb3RvLnByb3RvKjoKDlNwYWNlVHlwZVByb3RvEhIK",
          "DnNwYWNlX2Rpc2NyZXRlEAASFAoQc3BhY2VfY29udGludW91cxABYgZwcm90",
          "bzM="));
    descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
        new pbr::FileDescriptor[] { },
        new pbr::GeneratedClrTypeInfo(new[] {typeof(global::SpaceTypeProto), }, null));
  }
  #endregion

}
#region Enums
public enum SpaceTypeProto {
  [pbr::OriginalName("space_discrete")] SpaceDiscrete = 0,
  [pbr::OriginalName("space_continuous")] SpaceContinuous = 1,
}

#endregion


#endregion Designer generated code
