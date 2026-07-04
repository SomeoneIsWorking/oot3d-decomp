// OoT3D decomp @ 002344c4  name=FUN_002344c4  size=80

undefined4 FUN_002344c4(undefined4 param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_2 + 0x4c33) = *(undefined1 *)(param_3 + 1);
  *(char *)(param_2 + 0x4c32) = (char)*(undefined4 *)(param_3 + 4);
  *(byte *)(param_2 + 0x4c35) = (byte)((uint)(*(int *)(param_3 + 4) << 0x17) >> 0x1f);
  *(byte *)(param_2 + 0x4c37) = (byte)((uint)(*(int *)(param_3 + 4) << 0x16) >> 0x1f);
  *(ushort *)(param_2 + 0x2b9c) = (ushort)((uint)(*(int *)(param_3 + 4) << 0x15) >> 0x1f);
  return 1;
}

