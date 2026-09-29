// OoT3D decomp @ 002ae978  name=FUN_002ae978  size=544

void FUN_002ae978(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;

  if (*(int *)(param_1 + 0x1d0) == 0) {
    for (psVar7 = *(short **)(DAT_002aeb98 + param_2); psVar7 != (short *)0x0;
        psVar7 = *(short **)(psVar7 + 0x98)) {
      if (*psVar7 == DAT_002aeb9c) {
        *(short **)(param_1 + 0x1d0) = psVar7;
        break;
      }
    }
  }
  uVar3 = DAT_002aeba8;
  iVar9 = DAT_002aeba4;
  uVar2 = DAT_002aeba0;
  if (*(int *)(param_1 + 0x1d4) == 0) {
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)DAT_002aeba0;
    iVar8 = (uint)((ulonglong)lVar1 >> 0x21) * -3;
    if (*(uint *)(param_2 + 0x5bf4) + iVar8 == 0) {
      if (((*(uint *)(DAT_002aeba4 + 0x14) & 1) == 0) &&
         (iVar8 = FUN_003679b4(DAT_002aeba4 + 0x14,iVar8,(int)lVar1), puVar6 = DAT_002aebb8,
         uVar5 = DAT_002aebb4, uVar4 = DAT_002aebb0, iVar8 != 0)) {
        *DAT_002aebb8 = DAT_002aebac;
        puVar6[1] = uVar4;
        puVar6[2] = uVar5;
      }
      FUN_00321598(uVar3,param_2,DAT_002aebb8);
    }
    if ((*(int *)(param_1 + 0x1d0) != 0) && (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) == '\x03')
       ) {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 0) {
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)uVar2;
    iVar8 = (uint)((ulonglong)lVar1 >> 0x21) * -3;
    if (*(uint *)(param_2 + 0x5bf4) + iVar8 == 1) {
      if (((*(uint *)(iVar9 + 0x18) & 1) == 0) &&
         (iVar8 = FUN_003679b4(DAT_002aebbc,iVar8,(int)lVar1), puVar6 = DAT_002aebcc,
         uVar5 = DAT_002aebc8, uVar4 = DAT_002aebc4, iVar8 != 0)) {
        *DAT_002aebcc = DAT_002aebc0;
        puVar6[1] = uVar4;
        puVar6[2] = uVar5;
      }
      FUN_00321598(uVar3,param_2,DAT_002aebcc);
    }
    if ((*(int *)(param_1 + 0x1d0) != 0) && (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) == '\x03')
       ) {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
  }
  if (*(int *)(param_1 + 0x1d4) == 0) {
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x5bf4) * (ulonglong)uVar2;
    iVar8 = (uint)((ulonglong)lVar1 >> 0x21) * -3;
    if (*(uint *)(param_2 + 0x5bf4) + iVar8 == 2) {
      if (((*(uint *)(iVar9 + 0x1c) & 1) == 0) &&
         (iVar9 = FUN_003679b4(DAT_002aebd0,iVar8,(int)lVar1), puVar6 = DAT_002aebe0,
         uVar5 = DAT_002aebdc, uVar4 = DAT_002aebd8, iVar9 != 0)) {
        *DAT_002aebe0 = DAT_002aebd4;
        puVar6[1] = uVar4;
        puVar6[2] = uVar5;
      }
      FUN_00321598(uVar3,param_2,DAT_002aebe0);
    }
    if ((*(int *)(param_1 + 0x1d0) != 0) && (*(char *)(*(int *)(param_1 + 0x1d0) + 0xa10) == '\x03')
       ) {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
    }
  }
  return;
}
