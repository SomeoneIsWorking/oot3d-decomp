// OoT3D decomp @ 0027d61c  name=FUN_0027d61c  size=272

void FUN_0027d61c(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  FUN_0032b060();
  FUN_00376340(DAT_0027d730,DAT_0027d72c,DAT_0027d72c,param_2,param_1,5);
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      iVar1 = 3;
    }
    else if (*(short *)(param_1 + 0x1c) == 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = 5;
    }
    if ((*(int *)(&DAT_000022dc + param_2 + iVar1 * 4) != 0) &&
       (*(ushort *)(*(int *)(&DAT_000022dc + param_2 + iVar1 * 4) + 4) <=
        *(ushort *)(param_2 + 0x22b8))) {
      local_1c = *(undefined4 *)(param_1 + 0x28);
      uStack_18 = *(undefined4 *)(param_1 + 0x2c);
      uStack_14 = *(undefined4 *)(param_1 + 0x30);
      iVar1 = *DAT_0027d734;
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x146a),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_0037378c(fVar2 + DAT_0027d738,param_2,&local_1c,*(short *)(iVar1 + 0x146c) + 10,
                   (int)(short)(*(short *)(iVar1 + 0x146e) + 300),(int)*(short *)(iVar1 + 0x1470),0)
      ;
      FUN_0037547c(DAT_0027d744,param_1 + 0x28,4,DAT_0027d740,DAT_0027d740,DAT_0027d73c);
      *(undefined4 *)(param_1 + 0x3f8) = 3;
    }
  }
  return;
}
