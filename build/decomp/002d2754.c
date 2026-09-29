// OoT3D decomp @ 002d2754  name=FUN_002d2754  size=524

void FUN_002d2754(int param_1,int param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_134 [60];
  undefined2 local_f8;

  FUN_00371738(auStack_134,param_3,0x118);
  FUN_003445d4(param_1 + 4);
  FUN_003445d4(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 900) = 0;
  uVar1 = DAT_002d2960;
  *(undefined4 *)(param_1 + 0x388) = 0;
  uVar2 = DAT_002d2964;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  *(undefined1 *)(param_1 + 0x390) = 0;
  if (0 < param_3[5]) {
    iVar3 = 0;
    if (0 < param_3[3]) {
      do {
        fVar4 = *(float *)(*param_3 + iVar3 * 0xc);
        fVar5 = *(float *)(*param_3 + iVar3 * 0xc + 4);
        iVar3 = iVar3 + 1;
        fVar6 = *(float *)(param_1 + 0x374);
        if (fVar4 <= *(float *)(param_1 + 0x374)) {
          fVar6 = fVar4;
        }
        *(float *)(param_1 + 0x374) = fVar6;
        if (fVar4 <= *(float *)(param_1 + 0x378)) {
          fVar4 = *(float *)(param_1 + 0x378);
        }
        *(float *)(param_1 + 0x378) = fVar4;
        fVar4 = *(float *)(param_1 + 0x37c);
        if (fVar5 <= *(float *)(param_1 + 0x37c)) {
          fVar4 = fVar5;
        }
        *(float *)(param_1 + 0x37c) = fVar4;
        if (fVar5 <= *(float *)(param_1 + 0x380)) {
          fVar5 = *(float *)(param_1 + 0x380);
        }
        *(float *)(param_1 + 0x380) = fVar5;
      } while (iVar3 < param_3[3]);
    }
    if (param_2 != 0) {
      local_f8 = (undefined2)DAT_002d2968;
    }
    FUN_00348b90(param_1 + 4,param_3);
    FUN_00348b90(param_1 + 0x1bc,auStack_134);
    uVar2 = DAT_002d2970;
    uVar1 = DAT_002d296c;
    if (param_2 != 0) {
      if (param_4 == 0) {
        FUN_00348a64(param_1 + 4,0,param_2,0x2600,0x2600,DAT_002d296c,DAT_002d296c);
        FUN_00348a64(param_1 + 0x1bc,0,param_2,0x2600,0x2600,uVar1,uVar1);
      }
      else {
        FUN_00348a64(param_1 + 4,0,param_2,DAT_002d2970,DAT_002d2970,DAT_002d296c,DAT_002d296c);
        FUN_00348a64(param_1 + 0x1bc,0,param_2,uVar2,uVar2,uVar1,uVar1);
      }
    }
    *(int *)(param_1 + 900) = param_3[5];
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x388) = 0;
      *(undefined4 *)(param_1 + 0x38c) = 0;
    }
    else {
      *(int *)(param_1 + 0x388) = (int)*(short *)(param_2 + 0x2c);
      *(int *)(param_1 + 0x38c) = (int)*(short *)(param_2 + 0x2e);
    }
    *(undefined1 *)(param_1 + 0x390) = 1;
  }
  return;
}
