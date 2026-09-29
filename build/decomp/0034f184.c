// OoT3D decomp @ 0034f184  name=FUN_0034f184  size=196

void FUN_0034f184(int *param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  iVar1 = FUN_00332c98();
  if ((*(char *)(iVar1 + 0x208c) == '\0') && (0 < param_1[3])) {
    if ((param_3 <= param_2) && ((param_2 <= param_4 && (param_6 != (undefined4 *)0x0)))) {
      puVar2 = (undefined4 *)(*param_1 + param_1[3] * 0x30);
      uVar3 = param_6[1];
      uVar4 = param_6[2];
      uVar5 = param_6[3];
      uVar6 = param_6[4];
      uVar7 = param_6[5];
      uVar8 = param_6[6];
      uVar9 = param_6[7];
      *puVar2 = *param_6;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar2[4] = uVar6;
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      uVar3 = param_6[9];
      uVar4 = param_6[10];
      uVar5 = param_6[0xb];
      puVar2[8] = param_6[8];
      puVar2[9] = uVar3;
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar5;
      *(int *)(param_1[1] + param_1[3] * 4) = param_2;
      param_1[3] = param_1[3] + 1;
    }
    if (param_1[4] != param_2) {
      *(short *)(param_1 + 2) = (short)param_1[2] + 1;
    }
    if (param_5 <= (uint)(int)(short)param_1[2]) {
      *(short *)(param_1 + 2) = (short)param_1[3] + -1;
      param_1[3] = -1;
    }
  }
  param_1[4] = param_2;
  return;
}
