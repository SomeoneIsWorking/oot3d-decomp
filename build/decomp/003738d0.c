// OoT3D decomp @ 003738d0  name=FUN_003738d0  size=660

/* WARNING: Type propagation algorithm not settling */

short * FUN_003738d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    int param_5_00,int param_6_00,short param_7_00,short param_5,short param_6,
                    short param_7,undefined4 param_8)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  short *psVar8;
  
  iVar7 = DAT_00373b64 + param_6_00 * 0x20;
  if (*(byte *)(param_4 + 8) < 0xc9) {
    psVar8 = *(short **)(iVar7 + 0x14);
    iVar5 = FUN_00363c10(param_5_00 + 0x3a58,(int)psVar8[4]);
    if ((iVar5 < 0) ||
       ((*(char *)(psVar8 + 1) == '\x05' &&
        ((*(uint *)(DAT_00373b68 + param_5_00) & 1 << (uint)*(byte *)(param_5_00 + 0x4c30)) != 0))))
    {
      if (*(char *)(iVar7 + 0x1e) != '\0') {
        return (short *)0;
      }
      if (*(int *)(iVar7 + 0x10) == 0) {
        return (short *)0;
      }
      uVar2 = *(ushort *)(iVar7 + 0x1c);
    }
    else {
      psVar6 = (short *)FUN_00347248(*(undefined4 *)(psVar8 + 6));
      if (psVar6 != (short *)0x0) {
        *(char *)(iVar7 + 0x1e) = *(char *)(iVar7 + 0x1e) + '\x01';
        FUN_0034322c(psVar6,*(undefined4 *)(psVar8 + 6),0);
        *(int *)(psVar6 + 0xa2) = iVar7;
        uVar4 = DAT_00373ba8;
        *psVar6 = *psVar8;
        *(undefined4 *)(psVar6 + 2) = *(undefined4 *)(psVar8 + 2);
        sVar3 = *psVar8;
        if (sVar3 != 7) {
          *(char *)(psVar6 + 0xf) = (char)iVar5;
        }
        else {
          *(char *)(psVar6 + 0xf) = (char)param_6;
        }
        if (sVar3 == 7) {
          param_6 = 0;
        }
        *(undefined4 *)(psVar6 + 0x9a) = *(undefined4 *)(psVar8 + 8);
        *(undefined4 *)(psVar6 + 0x9c) = *(undefined4 *)(psVar8 + 10);
        *(undefined4 *)(psVar6 + 0x9e) = *(undefined4 *)(psVar8 + 0xc);
        *(undefined4 *)(psVar6 + 0xa0) = *(undefined4 *)(psVar8 + 0xe);
        *(undefined *)((int)psVar6 + 3) = *(undefined *)(param_5_00 + 0x4c30);
        *(undefined4 *)(psVar6 + 4) = param_1;
        *(undefined4 *)(psVar6 + 6) = param_2;
        *(undefined4 *)(psVar6 + 8) = param_3;
        psVar6[10] = param_7_00;
        psVar6[0xb] = param_5;
        psVar6[0xc] = param_6;
        psVar6[0xe] = param_7;
        iVar7 = (**(code **)(**DAT_00373ba4 + 0xc))
                          (*DAT_00373ba4,0x234,s_d__home_queen_dailyBuild_game_us_00373b6c,uVar4);
        if (iVar7 != 0) {
          iVar7 = FUN_00347258();
        }
        *(int *)(psVar6 + 0xbc) = iVar7;
        if (((*DAT_00373bac & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00373bac), iVar7 != 0)) {
          FUN_0036788c(DAT_00373bb0);
        }
        **(undefined4 **)(psVar6 + 0xbc) = *(undefined4 *)(DAT_00373bb0 + 0x174);
        *(undefined4 *)(psVar6 + 0xd0) = DAT_00373bbc;
        bVar1 = *(byte *)(psVar8 + 1);
        *(byte *)(psVar6 + 1) = bVar1;
        *(char *)(param_4 + 8) = *(char *)(param_4 + 8) + '\x01';
        param_4 = param_4 + (uint)bVar1 * 8;
        *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
        iVar7 = *(int *)(param_4 + 0x10);
        if (iVar7 != 0) {
          *(short **)(iVar7 + 300) = psVar6;
        }
        *(short **)(param_4 + 0x10) = psVar6;
        *(int *)(psVar6 + 0x98) = iVar7;
        FUN_004a31c0(psVar6,param_5_00,param_8);
        return psVar6;
      }
      if (*(char *)(iVar7 + 0x1e) != '\0') {
        return (short *)0;
      }
      if (*(int *)(iVar7 + 0x10) == 0) {
        return (short *)0;
      }
      uVar2 = *(ushort *)(iVar7 + 0x1c);
    }
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 1) == 0) {
        FUN_00350ef4();
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
    }
  }
  return (short *)0x0;
}

