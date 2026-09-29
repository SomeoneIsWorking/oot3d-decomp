// OoT3D decomp @ 00320fa0  name=FUN_00320fa0  size=236

void FUN_00320fa0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_00321090,DAT_0032108c,DAT_0032108c,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0032cd68(param_1,param_2);
  iVar2 = FUN_0037571c(param_2);
  psVar3 = (short *)0x0;
  if (iVar2 != 0) {
    psVar3 = *(short **)(param_2 + 0x22ec);
  }
  if ((iVar2 != 0 && psVar3 != (short *)0x0) && (*psVar3 == 4)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
    uVar1 = DAT_0032109c;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00321094 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003210a0,uVar4,DAT_0032109c,DAT_00321098 / fVar5,param_1 + 0x1a4,1,0);
    *(undefined4 *)(param_1 + 3000) = 0xe;
    *(undefined4 *)(param_1 + 0xbc0) = uVar1;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
  }
  return;
}
