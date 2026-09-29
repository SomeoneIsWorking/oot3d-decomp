// OoT3D decomp @ 00345a08  name=FUN_00345a08  size=220

void FUN_00345a08(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;

  iVar2 = FUN_0036c5bc(param_4,0xffffffff);
  if (param_5 < 0) {
    FUN_00367c48(iVar2);
    uVar3 = DAT_00345ae4;
  }
  else {
    if (param_5 == 0) {
      FUN_00367c54(iVar2);
      *(undefined4 *)(param_3 + 0x2060) = param_1;
      *(undefined4 *)(param_3 + 0x2064) = param_2;
      FUN_00367c60(iVar2);
      *(undefined4 *)(iVar2 + 0x144) = *(undefined4 *)(param_3 + 0x2064);
      return;
    }
    FUN_00367c54(iVar2);
    fVar1 = DAT_00345ae8;
    fVar4 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(param_1,DAT_00345ae8 / fVar4,param_1,param_3 + 0x2060);
    fVar4 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00373500(param_2,fVar1 / fVar4,param_2,param_3 + 0x2064);
    FUN_00367c60(*(undefined4 *)(param_3 + 0x2060),iVar2);
    uVar3 = *(undefined4 *)(param_3 + 0x2064);
  }
  *(undefined4 *)(iVar2 + 0x144) = uVar3;
  return;
}
