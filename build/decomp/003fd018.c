// OoT3D decomp @ 003fd018  name=FUN_003fd018  size=320

undefined4
FUN_003fd018(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_24;
  float local_20;
  float local_1c;

  iVar1 = (**(code **)(*(int *)*DAT_003fd158 + 8))((int *)*DAT_003fd158,0x1b8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_003432d4(iVar1,param_4);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  FUN_00348be4();
  if (((*DAT_003fd15c & 1) == 0) && (iVar1 = FUN_003679b4(DAT_003fd15c), iVar1 != 0)) {
    FUN_0036788c(DAT_003fd160);
  }
  uVar2 = BoardModelFactory_00340d00
                    (*(undefined4 *)(DAT_003fd16c + 0x47c),*(undefined4 *)(param_1 + 4),param_5,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  local_30 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = *DAT_003fd170;
  uStack_34 = DAT_003fd170[1];
  uStack_2c = DAT_003fd170[3];
  uStack_28 = DAT_003fd170[4];
  local_30 = DAT_003fd174 / local_30;
  local_24 = (float)VectorSignedToFloat(param_3 + -1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = (DAT_003fd174 / fVar3) * local_24;
  local_20 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  local_20 = DAT_003fd174 / local_20;
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = (float)VectorSignedToFloat(param_3 + -1,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = (DAT_003fd174 / fVar3) * local_1c;
  FUN_0034ea48(*(undefined4 *)(param_1 + 8),&local_38);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  return 1;
}
