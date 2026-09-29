// OoT3D decomp @ 002458d0  name=FUN_002458d0  size=124

void FUN_002458d0(int param_1,int param_2)

{
  int iVar1;

  if ((((0 < *(short *)(DAT_0024594c + 0x44)) && (*(short *)(DAT_00245950 + param_2) == 0)) &&
      (iVar1 = FUN_00374be8(param_2,0xf), iVar1 == 0)) &&
     ((**(code **)(param_1 + 0x490))(param_1,param_2), *(short *)(param_1 + 0x1c) != 3)) {
    FUN_0037572c(*(float *)(param_1 + 0x47c) * DAT_00245954,param_1);
    return;
  }
  return;
}
