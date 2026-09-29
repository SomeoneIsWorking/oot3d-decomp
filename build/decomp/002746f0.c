// OoT3D decomp @ 002746f0  name=FUN_002746f0  size=172

void FUN_002746f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  FUN_003731e0(param_1 + 0x2fc);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,DAT_0027479c,0);
  uVar1 = DAT_002747a0;
  iVar2 = FUN_003736fc(DAT_002747a4,DAT_002747a0,param_1 + 0x2fc);
  if ((iVar2 != 0) || (iVar2 = FUN_003736fc(DAT_002747a8,uVar1,param_1 + 0x2fc), iVar2 != 0)) {
    FUN_00375bcc(param_1,DAT_002747ac);
  }
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe) -
                                     (int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)ABS(fVar3) < DAT_002747b0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_002747b4;
  }
  return;
}
