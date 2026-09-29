// OoT3D decomp @ 0042f584  name=FUN_0042f584  size=436

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042f584(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = DAT_0042f78c;
  if (*(int *)(DAT_0042f78c + 0x34) == 0 || *(int *)(DAT_0042f78c + 0x34) == 0x17) {
    return;
  }
  (**(code **)(**(int **)(DAT_0042f78c + 0xc) + 0xc))();
  if (*(int *)(iVar4 + 0x34) - 0xcU < 8) {
    return;
  }
  FUN_002f780c(*(undefined4 *)(iVar4 + 0x14));
  FUN_002fb934(*(undefined4 *)(iVar4 + 0x30));
  FUN_002f78a0(*(undefined4 *)(iVar4 + 0x1c));
  if (*(int *)(iVar4 + 0x34) < 0xc) {
    FUN_002f78a0(*(undefined4 *)(iVar4 + 0x20));
  }
  iVar2 = *(int *)(iVar4 + 0x6c);
  if (iVar2 != 0xe) {
    if (iVar2 < 0xf) {
      switch(iVar2) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        goto code_r0x0042f698;
      case 10:
      case 0xd:
        goto switchD_0042f5fc_caseD_a;
      default:
        goto code_r0x0042f6d8;
      }
    }
    if (iVar2 == 0x16) {
code_r0x0042f698:
      iVar3 = FUN_0035b164();
      iVar2 = DAT_002f01c4;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar4 + 0x18);
        if (*(int *)(iVar4 + 0x428) == 7) {
          FUN_002e6ed0(iVar4);
        }
        (**(code **)(**(int **)(iVar4 + 8) + 0xc))();
        iVar2 = *(int *)(iVar4 + 0x428);
        if (iVar2 < 2) {
          iVar2 = 0;
          if (0 < *(int *)(iVar4 + 0x224)) {
            do {
              bVar5 = *(char *)(iVar4 + iVar2 + 0x434) != '\0';
              iVar3 = 0;
              if (bVar5) {
                iVar3 = *(int *)(iVar4 + iVar2 * 4 + 0xc);
              }
              if (bVar5 && iVar3 != 0) {
                FUN_002f78a0();
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar4 + 0x224));
          }
        }
        else if (((iVar2 == 2 || iVar2 == 3) || iVar2 == 6) || iVar2 == 5) {
          iVar4 = *(int *)(iVar4 + 0xc);
          FUN_002fc950();
                    /* WARNING: Could not recover jumptable at 0x002f78bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(iVar4 + 0x10) + 0xc))();
          return;
        }
        return;
      }
      if (((*(int *)(DAT_002f01c4 + 0x50) == 0) && (iVar4 = FUN_002fcdd4(), iVar4 == 0)) &&
         (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
        (**(code **)(**(int **)(iVar2 + 0x14) + 0xc))();
      }
      if (*(int *)(iVar2 + 0x50) == 1) {
        piVar1 = *(int **)(DAT_002f01c8 + *(int *)(iVar2 + 0x38) * 4);
        if (piVar1 != (int *)0x0 && *(int *)(iVar2 + 0x38) != -1) {
          (**(code **)(*piVar1 + 0xc))();
        }
        if (*(int *)(iVar2 + 0x24) != 0) {
          FUN_002fb934();
        }
        if (*(int *)(iVar2 + 0x2c) != 0) {
          FUN_002fb934();
          return;
        }
      }
      return;
    }
    if (iVar2 < 0x17) {
      switch(iVar2) {
      case 0xf:
        goto switchD_0042f5fc_caseD_a;
      default:
        goto code_r0x0042f6d8;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
        goto code_r0x0042f698;
      }
    }
    if (iVar2 != 0x19) {
      if (iVar2 < 0x1a) {
        if (iVar2 == 0x17 || iVar2 == 0x18) goto code_r0x0042f698;
      }
      else if (iVar2 == 0x1a || iVar2 == 0x4f) goto switchD_0042f5fc_caseD_a;
code_r0x0042f6d8:
      FUN_002f013c();
      if (*(int *)(iVar4 + 0x24) != 0) {
        FUN_002f012c();
      }
      if (*(int *)(iVar4 + 0x10) == 0) {
        return;
      }
      iVar2 = FUN_0037577c();
      if ((iVar2 != 0) && (*(int *)(DAT_0042f790 + 8) - 0xfff0U < 0xb)) {
        return;
      }
      if ((*(int *)(iVar4 + 0x2c) != 0) &&
         ((iVar2 = FUN_002f43e8(), iVar2 != 1 || (iVar2 = FUN_002eeef8(), iVar2 != 0)))) {
        FUN_002f011c(*(undefined4 *)(iVar4 + 0x2c));
      }
      if (*(int *)(iVar4 + 0x28) == 0) {
        return;
      }
      iVar2 = FUN_002f43e8();
      if ((iVar2 == 1) && (iVar2 = FUN_002eeef8(), iVar2 == 0)) {
        return;
      }
      FUN_002f010c(*(undefined4 *)(iVar4 + 0x28));
      return;
    }
  }
switchD_0042f5fc_caseD_a:
  if (*(int *)(iVar4 + 0x18) == 0) {
    return;
  }
  FUN_002f780c();
  return;
}
