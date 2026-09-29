// OoT3D decomp @ 0034897c  name=BoardModelFactory_0034897c  size=216

int BoardModelFactory_0034897c
              (undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)*DAT_00348a58 + 0xc))((int *)*DAT_00348a58,0x35c,DAT_00348a54,0x2e);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BoardRenderer_002c50d4(iVar1,param_2,param_4);
  }
  iVar3 = (**(code **)(*(int *)*DAT_00348a5c + 0xc))((int *)*DAT_00348a5c,0x1e4,DAT_00348a54,0x2f);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = FUN_002c4f00(iVar3,param_2,iVar2);
  }
  *(int *)(iVar2 + 0x354) = iVar1;
  if (param_3 == (undefined4 *)0x0) {
    iVar3 = (**(code **)(*(int *)*DAT_00348a60 + 0xc))((int *)*DAT_00348a60,0x234,DAT_00348a54,0x39)
    ;
    param_3 = (undefined4 *)0x0;
    if (iVar3 != 0) {
      param_3 = (undefined4 *)FUN_00347258();
    }
    *param_3 = *param_1;
    *(undefined4 **)(iVar1 + 0x1dc) = param_3;
  }
  *(undefined4 **)(iVar2 + 0x358) = param_3;
  return iVar1;
}
