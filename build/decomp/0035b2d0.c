// OoT3D decomp @ 0035b2d0  name=FUN_0035b2d0  size=216

void FUN_0035b2d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;

  iVar2 = FUN_0036c5bc(param_4,0xffffffff);
  if (param_5 < 0) {
    FUN_00367c48(iVar2);
    uVar3 = DAT_0035b3a8;
  }
  else {
    if (param_5 == 0) {
      FUN_00367c54(iVar2);
      *(undefined4 *)(param_3 + 0x1100) = param_1;
      *(undefined4 *)(param_3 + 0x1104) = param_2;
      FUN_00367c60(iVar2);
      *(undefined4 *)(iVar2 + 0x144) = *(undefined4 *)(param_3 + 0x1104);
      return;
    }
    FUN_00367c54(iVar2);
    fVar1 = DAT_0035b3ac;
    fVar4 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(param_1,DAT_0035b3ac / fVar4,param_1,param_3 + 0x1100);
    fVar4 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(param_2,fVar1 / fVar4,param_2,param_3 + 0x1104);
    FUN_00367c60(*(undefined4 *)(param_3 + 0x1100),iVar2);
    uVar3 = *(undefined4 *)(param_3 + 0x1104);
  }
  *(undefined4 *)(iVar2 + 0x144) = uVar3;
  return;
}
