// OoT3D decomp @ 0042d9f0  name=FUN_0042d9f0  size=188

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0042d9f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = DAT_0042daac;
  if (*(int *)(DAT_0042daac + 0x38) != 0) {
    iVar2 = FUN_002f1268();
    if (iVar2 == 0) {
      (**(code **)(**(int **)(iVar3 + 4) + 0xc))();
      if (*(int *)(iVar3 + 0x5c) != 0) {
        iVar3 = *(int *)(iVar3 + 0x24);
        if (*(int *)(iVar3 + 0x428) == 7) {
          FUN_002e6ed0(iVar3);
        }
        (**(code **)(**(int **)(iVar3 + 8) + 0xc))();
        iVar2 = *(int *)(iVar3 + 0x428);
        if (iVar2 < 2) {
          iVar2 = 0;
          if (0 < *(int *)(iVar3 + 0x224)) {
            do {
              bVar4 = *(char *)(iVar3 + iVar2 + 0x434) != '\0';
              iVar1 = 0;
              if (bVar4) {
                iVar1 = *(int *)(iVar3 + iVar2 * 4 + 0xc);
              }
              if (bVar4 && iVar1 != 0) {
                FUN_002f78a0();
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar3 + 0x224));
          }
        }
        else if (((iVar2 == 2 || iVar2 == 3) || iVar2 == 6) || iVar2 == 5) {
          iVar3 = *(int *)(iVar3 + 0xc);
          FUN_002fc950();
                    /* WARNING: Could not recover jumptable at 0x002f78bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(int **)(iVar3 + 0x10) + 0xc))();
          return;
        }
        return;
      }
      if (*(int *)(iVar3 + 0x28) != 0) {
        FUN_002f012c();
      }
      if (*(int *)(iVar3 + 0x50) != 0) {
        FUN_002f011c();
      }
      if (*(int *)(iVar3 + 0x2c) != 0) {
        FUN_002f010c();
      }
      if (*(int *)(iVar3 + 0x4c) != 0) {
        FUN_002fb934();
        return;
      }
    }
    else {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0xc))();
      FUN_002f013c();
      if (*(int *)(iVar3 + 0x44) == 0) {
        FUN_002f780c(*(undefined4 *)(iVar3 + 0x20));
        FUN_002f78a0(*(undefined4 *)(iVar3 + 0x18));
        FUN_002fb934(*(undefined4 *)(iVar3 + 0x1c));
        return;
      }
    }
  }
  return;
}
