// OoT3D decomp @ 0034405c  name=FUN_0034405c  size=728

uint FUN_0034405c(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int local_80;
  undefined4 *local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  ushort local_64 [32];

  local_6c = 0;
  uStack_68 = 0;
  local_74 = 0;
  uStack_70 = 0;
  if (param_4 < 0) {
    param_4 = -param_4;
    FUN_00305a20(&local_74,&DAT_0034435c);
  }
  iVar1 = (int)((ulonglong)((longlong)DAT_00344360 * (longlong)param_4) >> 0x20);
  iVar10 = param_4 + ((iVar1 >> 6) - (iVar1 >> 0x1f)) * -1000;
  iVar1 = (int)((ulonglong)((longlong)DAT_00344360 * (longlong)param_4) >> 0x20);
  iVar1 = (iVar1 >> 6) - (iVar1 >> 0x1f);
  iVar4 = (int)((ulonglong)((longlong)DAT_00344360 * (longlong)iVar1) >> 0x20);
  iVar1 = iVar1 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * -1000;
  iVar4 = (int)((ulonglong)((longlong)DAT_00344364 * (longlong)param_4) >> 0x20);
  iVar4 = (iVar4 >> 0x12) - (iVar4 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_00344360 * (longlong)iVar4) >> 0x20);
  iVar4 = iVar4 + ((iVar5 >> 6) - (iVar5 >> 0x1f)) * -1000;
  iVar5 = (int)((ulonglong)((longlong)DAT_00344368 * (longlong)param_4) >> 0x20);
  iVar5 = (iVar5 >> 0x1c) - (iVar5 >> 0x1f);
  iVar6 = (int)((ulonglong)((longlong)DAT_00344360 * (longlong)iVar5) >> 0x20);
  iVar5 = iVar5 + ((iVar6 >> 6) - (iVar6 >> 0x1f)) * -1000;
  switch(param_3) {
  case 1:
  case 2:
    FUN_00305a20(&local_6c,&DAT_0034436c);
    goto LAB_003441dc;
  case 3:
  case 4:
  case 5:
    goto switchD_00344130_caseD_3;
  case 6:
  case 7:
    goto joined_r0x003441b4;
  case 8:
    if (DAT_00344370 <= param_4) {
      FUN_00305a20(&local_6c,&DAT_00344374);
      goto LAB_003441dc;
    }
    break;
  case 9:
joined_r0x003441b4:
    if (DAT_00344370 <= param_4) {
switchD_00344130_caseD_3:
      FUN_00305a20(&local_6c,&DAT_0034437c);
      goto LAB_003441dc;
    }
  }
  FUN_00305a20(&local_6c,&DAT_00344378);
LAB_003441dc:
  if (iVar5 < 1) {
    if (iVar4 < 1) {
      if (iVar1 < 1) {
        FUN_00306938(local_64,0x40,u__ls_d_003443fc,&local_74,iVar10);
      }
      else {
        FUN_00306938(local_64,0x40,u__ls_d_ls_03d_003443e0,&local_74,iVar1,&local_6c,iVar10);
      }
    }
    else {
      local_80 = iVar10;
      FUN_00306938(local_64,0x40,u__ls_d_ls_03d_ls_03d_003443b8,&local_74,iVar4,&local_6c,iVar1,
                   &local_6c);
    }
  }
  else {
    local_7c = &local_6c;
    local_80 = iVar1;
    local_78 = iVar10;
    FUN_00306938(local_64,0x40,u__ls_d_ls_03d_ls_03d_ls_03d_00344380,&local_74,iVar5,local_7c,iVar4,
                 &local_6c);
  }
  uVar2 = FUN_003062f8(local_64);
  local_80 = *DAT_00344408;
  local_7c = (undefined4 *)DAT_00344408[1];
  local_78 = DAT_00344408[2];
  if (*(char *)((int)&local_80 + param_3) == '\0') {
    if (0x1f < uVar2) {
      uVar2 = 0x20;
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        puVar9 = local_64 + uVar8;
        uVar3 = *puVar9;
        uVar7 = (uint)uVar3;
        if ((uVar7 < 0x7f) && (0x1f < uVar7)) {
          uVar3 = *(ushort *)(DAT_0034440c + uVar7 * 2 + -0x40);
        }
        uVar8 = uVar8 + 1;
        *puVar9 = uVar3;
      } while (uVar8 < uVar2);
    }
  }
  uVar8 = uVar2;
  if (param_1 != 0) {
    uVar8 = param_2 >> 1;
    if (uVar2 < param_2 >> 1) {
      uVar8 = uVar2;
    }
    FUN_0034338c(param_1,local_64,uVar8 << 1);
  }
  return uVar8;
}
