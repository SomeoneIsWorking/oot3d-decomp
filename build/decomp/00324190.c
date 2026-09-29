// OoT3D decomp @ 00324190  name=FUN_00324190  size=520

void FUN_00324190(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 extraout_s0;
  float fVar7;
  float fVar8;
  undefined4 extraout_s1;
  float fVar9;
  float fVar10;
  undefined4 extraout_s2;
  int local_38;
  undefined4 local_34;
  int local_30;

  local_30 = param_2 + 4;
  piVar3 = (int *)(param_4 + param_1 * 0x34);
  iVar1 = *piVar3;
  if (iVar1 != -1) {
    piVar5 = param_3 + 5;
    piVar6 = (int *)(param_2 + 0x80);
    piVar4 = (int *)(param_2 + 0x8c);
    if (iVar1 == 0) {
      iVar1 = piVar3[1];
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_2 + 0x90);
        iVar2 = *(int *)(param_2 + 0x94);
        *param_3 = *piVar4;
        param_3[1] = iVar1;
        param_3[2] = iVar2;
        iVar1 = *(int *)(param_2 + 0x90);
        iVar2 = *(int *)(param_2 + 0x94);
        *piVar5 = *piVar4;
        param_3[6] = iVar1;
        param_3[7] = iVar2;
      }
      else if (iVar1 == 1) {
        iVar1 = *(int *)(param_2 + 0x90);
        iVar2 = *(int *)(param_2 + 0x94);
        *param_3 = *piVar4;
        param_3[1] = iVar1;
        param_3[2] = iVar2;
        iVar1 = piVar3[3];
        iVar2 = piVar3[4];
        *piVar5 = piVar3[2];
        param_3[6] = iVar1;
        param_3[7] = iVar2;
      }
      else if (iVar1 == 2) {
        FUN_00372474(&local_38,param_2 + 0x80,param_2 + 0x8c);
        param_3[3] = local_38;
        param_3[4] = local_34;
        iVar1 = piVar3[6];
        param_3[8] = piVar3[5];
        param_3[9] = iVar1;
      }
      iVar1 = *(int *)(param_2 + 0x84);
      iVar2 = *(int *)(param_2 + 0x88);
      param_3[10] = *piVar6;
      param_3[0xb] = iVar1;
      param_3[0xc] = iVar2;
      if (piVar3[7] == 1) {
        iVar1 = piVar3[9];
        iVar2 = piVar3[10];
        param_3[0xd] = piVar3[8];
        param_3[0xe] = iVar1;
        param_3[0xf] = iVar2;
      }
      else if (piVar3[7] == 2) {
        iVar1 = (int)*(short *)(*(int *)(param_2 + 0xd8) + 0xbe);
        fVar7 = (float)FUN_002cfca0(iVar1);
        fVar9 = (float)piVar3[8];
        fVar8 = (float)FUN_00338f60(iVar1);
        fVar10 = (float)piVar3[8];
        param_3[0xd] = (int)((float)param_3[10] + fVar7 * fVar9);
        param_3[0xe] = (int)((float)param_3[0xb] + (float)piVar3[9]);
        param_3[0xf] = (int)((float)param_3[0xc] + fVar8 * fVar10);
      }
      param_3[0x10] = 0;
      return;
    }
    if (iVar1 == 1) {
      FUN_00372474(&local_38,param_2 + 0x80,param_2 + 0x8c);
      *(undefined2 *)(local_30 + 0x30) = *(undefined2 *)(*(int *)(param_2 + 0xd8) + 0xbe);
      local_38 = DAT_0032439c;
      if (*(int *)(DAT_00324398 + 4) != 0) {
        local_38 = DAT_003243a0;
      }
      local_34 = CONCAT22(*(short *)(*(int *)(param_2 + 0xd8) + 0xbe) + -0x8000,0x1000);
      FUN_00372448(param_2 + 0x80,&local_38);
      *(undefined4 *)(param_2 + 0xa4) = extraout_s0;
      *(undefined4 *)(param_2 + 0xa8) = extraout_s1;
      *(undefined4 *)(param_2 + 0xac) = extraout_s2;
      *piVar4 = *(int *)(param_2 + 0xa4);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0xa8);
      *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0xac);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(int *)(param_2 + 0xd8) + 0x28);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(int *)(param_2 + 0xd8) + 0x30);
      iVar1 = *(int *)(param_2 + 0x90);
      iVar2 = *(int *)(param_2 + 0x94);
      *param_3 = *piVar4;
      param_3[1] = iVar1;
      param_3[2] = iVar2;
      iVar1 = *(int *)(param_2 + 0x90);
      iVar2 = *(int *)(param_2 + 0x94);
      *piVar5 = *piVar4;
      param_3[6] = iVar1;
      param_3[7] = iVar2;
      iVar1 = *(int *)(param_2 + 0x84);
      iVar2 = *(int *)(param_2 + 0x88);
      param_3[10] = *piVar6;
      param_3[0xb] = iVar1;
      param_3[0xc] = iVar2;
      iVar1 = *(int *)(param_2 + 0x84);
      iVar2 = *(int *)(param_2 + 0x88);
      param_3[0xd] = *piVar6;
      param_3[0xe] = iVar1;
      param_3[0xf] = iVar2;
      param_3[0x10] = 0;
    }
  }
  return;
}
