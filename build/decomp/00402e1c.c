// OoT3D decomp @ 00402e1c  name=FUN_00402e1c  size=412

void FUN_00402e1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 float *param_6)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float local_2c;
  float local_28;

  if ((param_5 & 1) != 0) {
    *param_6 = DAT_00402fb8;
  }
  if ((param_5 & 2) != 0) {
    param_6[8] = (float)-*(int *)(param_2 + 0x1c);
  }
  if ((param_5 & 0x10) != 0) {
    param_6[6] = DAT_00402fbc;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  if (1 < *(uint *)(param_2 + 0xc)) {
    param_5 = param_5 & 0xffffffd3;
  }
  if (piVar2 != (int *)(param_2 + 0x10)) {
    do {
      piVar3 = piVar2 + -0x19;
      if ((param_5 & 3) != 0) {
        FUN_004036c0(param_2,piVar3,param_3,&local_28,&local_2c);
        if ((param_5 & 1) != 0) {
          fVar1 = *param_6;
          if (*param_6 <= local_28) {
            fVar1 = local_28;
          }
          *param_6 = fVar1;
        }
        if ((param_5 & 2) != 0) {
          fVar1 = param_6[8];
          if ((int)param_6[8] <= (int)local_2c) {
            fVar1 = local_2c;
          }
          param_6[8] = fVar1;
        }
      }
      if ((param_5 & 0xc) != 0) {
        FUN_004037a8(param_2,piVar3,param_3,param_1 + 4,&local_28,&local_2c);
        if ((param_5 & 4) != 0) {
          param_6[2] = local_28;
        }
        if ((param_5 & 8) != 0) {
          param_6[3] = local_2c;
        }
      }
      if ((param_5 & 0x20) != 0) {
        FUN_00403814(param_2,piVar3,param_3,&local_28);
        param_6[1] = local_28;
      }
      if ((param_5 & 0x10) != 0) {
        FUN_00403648(param_2,piVar3,param_3,&local_28);
        param_6[7] = *(float *)(param_2 + 0x28);
        fVar1 = param_6[6];
        if (local_28 <= param_6[6]) {
          fVar1 = local_28;
        }
        param_6[6] = fVar1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_2 + 0x10));
  }
  return;
}
