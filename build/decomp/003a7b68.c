// OoT3D decomp @ 003a7b68  name=FUN_003a7b68  size=128

void FUN_003a7b68(int param_1)

{
  uint in_fpscr;
  float fVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(int *)(param_1 + 0x1b0) != 0) {
    fVar1 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(DAT_003a7bec,DAT_003a7bec,DAT_003a7bec,fVar1 * DAT_003a7be8,
                 *(int *)(param_1 + 0x1b0),0,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1b0),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),1);
  }
  return;
}
