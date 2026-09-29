// OoT3D decomp @ 003d4cb0  name=FUN_003d4cb0  size=424

void FUN_003d4cb0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  fVar1 = DAT_003d4e58;
  local_30 = DAT_003d4e58;
  local_2c = DAT_003d4e58;
  local_28 = DAT_003d4e58;
  local_3c = DAT_003d4e58;
  local_38 = DAT_003d4e58;
  local_34 = DAT_003d4e58;
  FUN_00370734(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x4ac) == 0) {
    *(float *)(param_1 + 0x6c) = fVar1;
    FUN_0036fc20(DAT_003d4e64,DAT_003d4e60,param_1 + 0x4c0);
    if (*(int *)(param_1 + 0x4c0) < DAT_003d4e68) {
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      local_1c = *(undefined4 *)(param_1 + 0x30);
      local_38 = (float)DAT_003d4e6c;
      FUN_003642f4(param_2,&local_24,&local_3c,&local_30,0x78,0,0xff,0xff,0xff,0xff,0xff,0,0,1,0xb,1
                  );
      if (*(short *)(param_1 + 0x4ae) == 0) {
        FUN_00374444(param_2,param_1,&local_24,0xe0);
      }
      else {
        FUN_00374444(param_2,param_1,&local_24,0xc0);
      }
      iVar2 = *(int *)(param_1 + 0x124);
      if (iVar2 != 0) {
        if (((*(int *)(iVar2 + 0x13c) != 0) && (*(short *)(param_1 + 0x4ae) == 0)) &&
           (*(short *)(iVar2 + 0x1b6) < 10)) {
          *(short *)(iVar2 + 0x1b6) = *(short *)(iVar2 + 0x1b6) + 1;
        }
        FUN_00374428(param_1);
        return;
      }
    }
  }
  else if (*(float *)(param_1 + 0x6c) < fVar1) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_003d4e5c;
  }
  return;
}
