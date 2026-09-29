// OoT3D decomp @ 00415be8  name=FUN_00415be8  size=904

int FUN_00415be8(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *unaff_r8;
  bool bVar5;
  bool bVar6;
  int iStack_88;
  undefined4 local_84;
  ushort *local_7c;
  uint local_78;
  ushort *puStack_74;
  ushort *local_70;
  uint uStack_6c;
  ushort *puStack_68;
  ushort *local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ushort *local_54;
  uint local_50;
  ushort *local_4c;
  ushort *local_48;
  undefined1 auStack_44 [12];
  char local_38;
  undefined4 local_34;
  int *piStack_30;
  undefined4 *local_2c;
  int *piStack_28;

  local_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  FUN_00400b60(auStack_44);
  iVar1 = FUN_00400b0c(auStack_44,param_6);
  if (-1 < iVar1) {
    local_48 = (ushort *)0x0;
    local_54 = (ushort *)0x0;
    iVar2 = FUN_003021c8(auStack_44,&local_50);
    iVar1 = DAT_00415f70;
    if ((-1 < iVar2) && (iVar2 = FUN_00302288(local_34,&local_48,&local_60,&local_54), -1 < iVar2))
    {
      local_64 = local_48;
      do {
        while( true ) {
          while( true ) {
            if (local_38 != '\0') {
              *param_2 = (int)local_54;
              param_2[1] = local_50;
              param_2[2] = (int)local_4c;
              *local_2c = local_60;
              local_2c[1] = uStack_5c;
              local_2c[2] = uStack_58;
              iVar2 = 0;
              unaff_r8 = local_64;
              goto LAB_00415ddc;
            }
            local_70 = local_54;
            uStack_6c = local_50;
            puStack_68 = local_4c;
            iVar2 = FUN_003021c8(auStack_44,&local_50);
            if (iVar2 < 0) goto LAB_00415ddc;
            uVar3 = local_50;
            if (local_50 == 1) {
              uVar3 = (uint)*local_4c;
            }
            if (local_50 != 1 || uVar3 != 0x2e) break;
            local_54 = local_70;
            local_50 = uStack_6c;
            local_4c = puStack_68;
          }
          bVar5 = local_50 == 2;
          uVar3 = local_50;
          if (bVar5) {
            uVar3 = (uint)*local_4c;
          }
          bVar6 = bVar5 && uVar3 == 0x2e;
          if (bVar5 && uVar3 == 0x2e) {
            bVar6 = local_4c[1] == 0x2e;
          }
          if (bVar6) break;
          local_54 = local_64;
          iVar2 = FUN_00302288(local_34,&local_48,&local_60,&local_54);
          if (iVar2 < 0) goto LAB_00415ddc;
          local_64 = local_48;
        }
        iVar2 = iVar1;
        if (local_64 == (ushort *)0x0) break;
        local_78 = local_50;
        puStack_74 = local_4c;
        iVar2 = FUN_00302424(local_34,&local_7c,&iStack_88,0,0,local_54);
        if (-1 < iVar2) {
          local_54 = local_7c;
          iVar2 = FUN_00302314(&local_50,&local_78,param_6);
          if ((-1 < iVar2) &&
             (iVar2 = FUN_00302288(local_34,&local_64,&local_60,&local_54), -1 < iVar2)) {
            iVar2 = 0;
          }
        }
      } while (-1 < iVar2);
    }
LAB_00415ddc:
    if (iVar2 < 0) {
      return iVar2;
    }
    if (param_5 == 0) {
      iVar2 = FUN_0040d30c(auStack_44);
      if (iVar2 != 0) {
        return iVar1;
      }
      *param_4 = (int)unaff_r8;
      iVar1 = FUN_0040d2d4(auStack_44,param_4 + 1);
    }
    else {
      iVar2 = FUN_0040d35c(auStack_44,&local_4c);
      if (iVar2 < 0) {
        return iVar2;
      }
      puVar4 = local_4c;
      if (local_4c == (ushort *)0x1) {
        puVar4 = (ushort *)(uint)*local_48;
      }
      if (local_4c == (ushort *)0x1 && puVar4 == (ushort *)0x2e) {
        iVar1 = param_2[1];
        iVar2 = param_2[2];
        *param_4 = *param_2;
        param_4[1] = iVar1;
        param_4[2] = iVar2;
        if (*param_4 == 0) {
          return 0;
        }
        local_84 = param_6;
        iStack_88 = param_4[2];
        iVar1 = FUN_00302144(local_34,&local_50,param_2,local_2c,*param_4,param_4[1]);
      }
      else {
        bVar5 = local_4c == (ushort *)0x2;
        puVar4 = local_4c;
        if (bVar5) {
          puVar4 = (ushort *)(uint)*local_48;
        }
        bVar6 = bVar5 && puVar4 == (ushort *)0x2e;
        if (bVar5 && puVar4 == (ushort *)0x2e) {
          bVar6 = local_48[1] == 0x2e;
        }
        if (!bVar6) {
          param_4[1] = (int)local_4c;
          param_4[2] = (int)local_48;
          if (local_4c == (ushort *)0x0) {
            unaff_r8 = (ushort *)0x0;
          }
          *param_4 = (int)unaff_r8;
          return 0;
        }
        if (unaff_r8 == (ushort *)0x0) {
          return iVar1;
        }
        local_84 = param_6;
        iStack_88 = param_2[2];
        iVar1 = FUN_00302144(local_34,&local_50,param_4,&uStack_5c,*param_2,param_2[1]);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (*param_4 == 0) {
          return 0;
        }
        local_84 = param_6;
        iStack_88 = param_4[2];
        iVar1 = FUN_00302144(local_34,&local_50,param_2,local_2c,*param_4,param_4[1]);
      }
    }
    if (-1 < iVar1) {
      return 0;
    }
  }
  return iVar1;
}
