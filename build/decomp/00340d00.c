// OoT3D decomp @ 00340d00  name=FUN_00340d00  size=216

int FUN_00340d00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**DAT_00340ddc + 0xc))(*DAT_00340ddc,0x35c,DAT_00340dd8,0x52);
  if (iVar1 != 0) {
    iVar1 = FUN_002c50d4(iVar1,param_2);
  }
  iVar2 = (**(code **)(**DAT_00340de0 + 0xc))(*DAT_00340de0,0x28c,DAT_00340dd8,0x53);
  if (iVar2 != 0) {
    iVar2 = FUN_004970c0(iVar2,param_2);
  }
  *(int *)(iVar1 + 0x354) = iVar2;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)
              (**(code **)(**DAT_00340de4 + 0xc))(*DAT_00340de4,0x234,DAT_00340dd8,0x5d);
    if (param_3 != (undefined4 *)0x0) {
      param_3 = (undefined4 *)FUN_00347258();
    }
    *param_3 = *param_1;
    *(undefined4 **)(iVar2 + 0x1dc) = param_3;
  }
  *(undefined4 **)(iVar1 + 0x358) = param_3;
  return iVar2;
}

