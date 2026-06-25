// OoT3D decomp @ 002cd744  name=FUN_002cd744  size=552

void FUN_002cd744(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined auStack_38 [16];
  int local_28;
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    local_44 = *DAT_002cd96c;
    uStack_40 = DAT_002cd96c[1];
    uStack_3c = DAT_002cd96c[2];
    if (*(char *)((int)&local_44 + *(int *)(param_1 + 0xf3c)) == '\0') {
      uVar8 = 1;
      goto LAB_002cd784;
    }
  }
  uVar8 = 0;
LAB_002cd784:
  local_44 = *DAT_002cd96c;
  uStack_40 = DAT_002cd96c[1];
  uStack_3c = DAT_002cd96c[2];
  uVar1 = (uint)*(byte *)((int)&local_44 + *(int *)(param_1 + 0xf3c));
  iVar7 = 1 - uVar1;
  if (1 < uVar1) {
    iVar7 = 0;
  }
  iVar2 = FUN_002cd710(param_1 + 0x44);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xfac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xfa8) = 0;
    *(undefined4 *)(param_1 + 0xfb0) = 0;
    *(undefined4 *)(param_1 + 0xfc4) = 0;
    if ((*(char *)(param_1 + 0xfc8) == '\0') && (iVar2 = FUN_002cd710(param_1 + 0x44), iVar2 != 0))
    {
      FUN_002cd6c0(param_1 + 0x44);
      *(undefined *)(param_1 + 0xfc8) = 1;
      *(undefined4 *)(param_1 + 0xfcc) = 2;
    }
    FUN_00305790(param_1 + 0x44);
    FUN_002c453c(param_1 + 0x44);
    FUN_002bf26c(param_1 + 0x44);
    *(undefined4 *)(param_1 + 3000) = 0;
    iVar2 = *(int *)(param_1 + 0xec8);
    local_28 = param_1 + 0x9dc;
    iVar6 = param_1 + 0xac4;
    while( true ) {
      piVar3 = (int *)FUN_003053d8(local_28,iVar2);
      FUN_002dabe0(iVar6,piVar3);
      iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3);
      if (iVar4 != 0) break;
      iVar2 = iVar2 + 1;
    }
    if ((iVar7 == 0) || (*(int *)(param_1 + 0xf40) - 0x500U < 0x100)) {
      *(undefined4 *)(param_1 + 0xba4) = 0;
      *(undefined4 *)(param_1 + 0xba0) = 0;
      *(undefined *)(param_1 + 0xadc) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xba4) = 1;
      if (*(char *)(param_1 + 0xf) == '\0') {
        uVar5 = 9;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)(param_1 + 0xba0) = uVar5;
      *(char *)(param_1 + 0xadc) = *(char *)(param_1 + 0xf);
    }
    uVar1 = 0;
    do {
      FUN_004c68cc(param_1 + 0x44,uVar1 & 0xff,auStack_38);
      FUN_00303db4(iVar6,uVar1 & 0xff,auStack_38);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 8);
    local_44 = 0;
    if (*(int *)(param_1 + 0xf48) == 6) {
      uVar5 = 400;
    }
    else {
      uVar5 = 0x120;
    }
    iVar7 = FUN_002daaf0(DAT_002cd970,iVar6,0,0,uVar5,1);
    if (iVar7 != 0) {
      if ((*(uint *)(param_1 + 0xc6c) & 0x3fffffff) != 0) {
        FUN_004c65ec(param_1);
      }
      if (*(char *)(param_1 + 0xeb4) == '\0' || *(char *)(param_1 + 0xeb4) == '\x06') {
        FUN_004c6454(param_1 + 0xeac,uVar8);
      }
      *(undefined *)(param_1 + 0xf38) = 4;
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      *(undefined4 *)(param_1 + 0xfc4) = 0;
    }
  }
  return;
}

