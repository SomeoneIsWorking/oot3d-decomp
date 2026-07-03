// OoT3D decomp @ 004563d4  name=FUN_004563d4  size=1048

uint FUN_004563d4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int local_a8;
  int iStack_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  ushort local_5c [32];
  
  local_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_94 = 0;
  uStack_90 = 0;
  local_9c = 0;
  uStack_98 = 0;
  uVar1 = FUN_00305aa4(param_4);
  iVar2 = FUN_00305a3c(param_4);
  local_a8 = iVar2;
  iStack_a4 = uVar1;
  switch(param_3) {
  case 0:
    uVar1 = FUN_002e6280(param_4);
    FUN_00306938(&local_6c,0x10,u__04d_00456810,uVar1);
    uVar1 = FUN_002e6224(param_4);
    FUN_00306938(&local_8c,0x20,u__02d_0045681c,uVar1);
    uVar1 = FUN_002e61c8(param_4);
    FUN_00306938(&local_94,8,u__02d_0045681c,uVar1);
    FUN_00306938(local_5c,0x40,u__ls__ls__ls__02d__02d_00456828,&local_6c,&local_8c,&local_94);
    break;
  case 1:
    if (iVar2 < 0xc) {
      FUN_00305a20(&local_9c,&DAT_00456854);
    }
    else {
      FUN_00305a20(&local_9c,&DAT_0045685c);
    }
    iVar5 = (int)((ulonglong)((longlong)DAT_00456864 * (longlong)iVar2) >> 0x20);
    iVar2 = iVar2 + ((iVar5 >> 1) - (iVar5 >> 0x1f)) * -0xc;
    if (iVar2 < 1) {
      iVar2 = 0xc;
    }
    iVar5 = FUN_002e6280(param_4);
    FUN_00306938(&local_6c,0x10,u__02d_0045681c,iVar5 + -2000);
    uVar1 = FUN_002e6224(param_4);
    FUN_00306938(&local_8c,0x20,u__02d_0045681c,uVar1);
    uVar1 = FUN_002e61c8(param_4);
    FUN_00306938(&local_94,8,u__02d_0045681c,uVar1);
    local_a0 = &local_9c;
    local_a8 = iVar2;
    FUN_00306938(local_5c,0x40,u__ls__ls__ls__02d__02d_ls_00456868,&local_8c,&local_94,&local_6c);
    break;
  case 2:
  case 4:
  case 5:
  case 8:
    uVar1 = FUN_002e6280(param_4);
    FUN_00306938(&local_6c,0x10,u__04d_00456810,uVar1);
    uVar1 = FUN_002e6224(param_4);
    FUN_00306938(&local_8c,0x20,u__02d_0045681c,uVar1);
    uVar1 = FUN_002e61c8(param_4);
    FUN_00306938(&local_94,8,u__02d_0045681c,uVar1);
    FUN_00306938(local_5c,0x40,u__ls__ls__ls__02d__02d_0045689c,&local_94,&local_8c,&local_6c);
    break;
  case 3:
    uVar1 = FUN_002e6280(param_4);
    FUN_00306938(&local_6c,0x10,u__04d_00456810,uVar1);
    uVar1 = FUN_002e6224(param_4);
    FUN_00306938(&local_8c,0x20,u__02d_0045681c,uVar1);
    uVar1 = FUN_002e61c8(param_4);
    FUN_00306938(&local_94,8,u__02d_0045681c,uVar1);
    FUN_00306938(local_5c,0x40,u__ls__ls__ls__02d__02d_00456828,&local_94,&local_8c,&local_6c);
    break;
  default:
    uVar1 = FUN_002e6280(param_4);
    FUN_00306938(&local_6c,0x10,u__04d_00456810,uVar1);
    uVar1 = FUN_002e6224(param_4);
    FUN_00306938(&local_8c,0x20,u__02d_0045681c,uVar1);
    uVar1 = FUN_002e61c8(param_4);
    FUN_00306938(&local_94,8,u__02d_0045681c,uVar1);
    FUN_00306938(local_5c,0x40,u__ls__ls__ls__02d__02d_004568c8,&local_94,&local_8c,&local_6c);
  }
  uVar3 = FUN_003062f8(local_5c);
  local_a8 = *DAT_004568f4;
  iStack_a4 = DAT_004568f4[1];
  local_a0 = (undefined4 *)DAT_004568f4[2];
  if (*(char *)((int)&local_a8 + param_3) == '\0') {
    if (0x1f < uVar3) {
      uVar3 = 0x20;
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        puVar8 = local_5c + uVar7;
        uVar4 = *puVar8;
        uVar6 = (uint)uVar4;
        if ((uVar6 < 0x7f) && (0x1f < uVar6)) {
          uVar4 = *(ushort *)(DAT_004568f8 + uVar6 * 2 + -0x40);
        }
        uVar7 = uVar7 + 1;
        *puVar8 = uVar4;
      } while (uVar7 < uVar3);
    }
  }
  uVar7 = uVar3;
  if (param_1 != 0) {
    uVar7 = param_2 >> 1;
    if (uVar3 < param_2 >> 1) {
      uVar7 = uVar3;
    }
    FUN_0034338c(param_1,local_5c,uVar7 << 1);
  }
  return uVar7;
}

