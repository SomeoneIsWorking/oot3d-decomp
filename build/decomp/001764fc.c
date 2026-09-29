// OoT3D decomp @ 001764fc  name=FUN_001764fc  size=944

void FUN_001764fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;

  local_4c = DAT_00176868;
  local_48 = DAT_00176868;
  local_44 = DAT_00176868;
  if (*(char *)(param_2 + 0x5c74) == -1) {
    *(undefined2 *)(*(int *)(param_2 + 0x20ac) + 0x118) = 0xf;
    uVar4 = DAT_0017686c;
    *(undefined2 *)(param_1 + 0x1ac) = 2;
    goto LAB_00176860;
  }
  if (*(short *)(param_1 + 0x1a8) != 0) {
    return;
  }
  iVar6 = 0;
  do {
    iVar8 = param_1 + iVar6 * 0xc;
    FUN_0036df4c(iVar8 + 0x1c4,&local_4c);
    FUN_0036df4c(iVar8 + 0x1dc,&local_4c);
    iVar8 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(param_1 + iVar8 + 0x21c) = 0;
  } while (iVar6 < 2);
  *(undefined2 *)(param_1 + 0x1c2) = 2;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  iVar6 = DAT_00176870;
  iVar8 = *(short *)(param_1 + 0x1b0) + -1;
  switch(iVar8) {
  case 0:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870);
    FUN_0036df4c(param_1 + 0x1dc,DAT_00176874);
    *(undefined2 *)(param_1 + 0x1c2) = 1;
    uVar4 = *(undefined4 *)(param_1 + 500);
    goto LAB_00176678;
  case 1:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870 + 0xc);
    FUN_0036df4c(param_1 + 0x1d0,iVar6 + 0x18);
    FUN_0036df4c(param_1 + 0x1dc,iVar6 + 0x84);
    FUN_0036df4c(param_1 + 0x1e8,iVar6 + 0x90);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x1f8);
    uVar4 = *(undefined4 *)(param_1 + 0x1fc);
    break;
  case 2:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870 + 0x24);
    FUN_0036df4c(param_1 + 0x1dc,iVar6 + 0x9c);
    *(undefined2 *)(param_1 + 0x1c2) = 1;
    uVar4 = *(undefined4 *)(param_1 + 0x200);
LAB_00176678:
    *(undefined4 *)(param_1 + 0x228) = uVar4;
    goto switchD_001765d4_default;
  case 3:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870 + 0x30);
    FUN_0036df4c(param_1 + 0x1d0,iVar6 + 0x3c);
    FUN_0036df4c(param_1 + 0x1dc,iVar6 + 0xa8);
    FUN_0036df4c(param_1 + 0x1e8,iVar6 + 0xb4);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x204);
    uVar4 = *(undefined4 *)(param_1 + 0x208);
    break;
  case 4:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870 + 0x48);
    FUN_0036df4c(param_1 + 0x1d0,iVar6 + 0x54);
    FUN_0036df4c(param_1 + 0x1dc,iVar6 + 0xc0);
    FUN_0036df4c(param_1 + 0x1e8,iVar6 + 0xcc);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x20c);
    uVar4 = *(undefined4 *)(param_1 + 0x210);
    break;
  case 5:
    FUN_0036df4c(param_1 + 0x1c4,DAT_00176870 + 0x60);
    FUN_0036df4c(param_1 + 0x1d0,iVar6 + 0x6c);
    FUN_0036df4c(param_1 + 0x1dc,iVar6 + 0xd8);
    FUN_0036df4c(param_1 + 0x1e8,iVar6 + 0xe4);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x214);
    uVar4 = *(undefined4 *)(param_1 + 0x218);
    break;
  default:
    goto switchD_001765d4_default;
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
switchD_001765d4_default:
  uVar3 = DAT_00176888;
  uVar2 = DAT_00176884;
  uVar1 = DAT_00176880;
  uVar4 = DAT_0017687c;
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x1c2)) {
    local_40 = param_2 + 0x208c;
    puVar10 = (undefined2 *)(DAT_00176878 + iVar8 * 2);
    do {
      iVar9 = param_1 + iVar6 * 0xc;
      iVar5 = FUN_0036aa20(*(undefined4 *)(iVar9 + 0x1c4),*(undefined4 *)(iVar9 + 0x1c8),
                           *(undefined4 *)(iVar9 + 0x1cc),local_40,param_1,param_2,DAT_00176890,0,0,
                           0,DAT_0017688c);
      iVar7 = param_1 + iVar6 * 4;
      *(int *)(iVar7 + 0x21c) = iVar5;
      if (iVar5 == 0) {
        FUN_00374428(param_1);
        return;
      }
      *(short *)(iVar5 + 0x1b8) = (short)iVar6;
      *(undefined2 *)(*(int *)(iVar7 + 0x21c) + 0x1b0) = *puVar10;
      FUN_0036df4c(*(int *)(iVar7 + 0x21c) + 0x1c4,iVar9 + 0x1dc);
      if (iVar8 == 1) {
        if (iVar6 == 1) {
          *(undefined2 *)(*(int *)(param_1 + 0x220) + 0x1ba) = 0x5a;
        }
      }
      else if (iVar8 == 2) {
        *(undefined4 *)(*(int *)(iVar7 + 0x21c) + 100) = uVar4;
        *(undefined4 *)(*(int *)(iVar7 + 0x21c) + 0x70) = uVar1;
        *(undefined2 *)(*(int *)(iVar7 + 0x21c) + 0x1be) = 2;
      }
      else if (iVar8 == 4) {
        *(undefined4 *)(*(int *)(iVar7 + 0x21c) + 0x60) = uVar2;
        *(undefined2 *)(*(int *)(iVar7 + 0x21c) + 0x1be) = 4;
      }
      else if (iVar8 == 5) {
        *(undefined4 *)(*(int *)(iVar7 + 0x21c) + 0x60) = uVar3;
        *(undefined2 *)(*(int *)(iVar7 + 0x21c) + 0x1be) = 5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(short *)(param_1 + 0x1c2));
  }
  *(undefined2 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x1be) = 0;
  uVar4 = DAT_00176894;
LAB_00176860:
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
