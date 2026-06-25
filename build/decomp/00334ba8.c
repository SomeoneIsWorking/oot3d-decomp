// OoT3D decomp @ 00334ba8  name=FUN_00334ba8  size=144

void FUN_00334ba8(undefined4 param_1,int param_2,undefined4 param_3,char *param_4)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = (int)*param_4;
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      (**(code **)(param_4 + 4))(param_1,param_2);
    }
  }
  else {
    (**(code **)(DAT_00334c38 + iVar2 * 4))(param_1,param_2,*(undefined4 *)(param_4 + 4));
  }
  iVar2 = DAT_00334c3c;
  if (((*(uint *)(DAT_00334c3c + 0x15c) & 4) != 0) && ((*(byte *)(param_2 + 0x2a6) & 4) == 0)) {
    pfVar1 = (float *)(*(int *)(param_2 + 0x2d0) + (uint)*(byte *)(param_2 + 0x2c9) * 0x34 + 0x1c);
    *pfVar1 = *pfVar1 / *(float *)(*(int *)(DAT_00334c40 + param_2) + 8);
    *(undefined4 *)(iVar2 + 0x15c) = 0;
  }
  return;
}

