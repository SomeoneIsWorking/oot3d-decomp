// OoT3D decomp @ 00438720  name=FUN_00438720  size=560

void FUN_00438720(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  uVar2 = FUN_0033b5d0();
  iVar1 = DAT_00438954;
  iVar3 = DAT_00438950;
  if (((uVar2 & 0x40) == 0) || (uVar2 = FUN_0033b5d0(), (uVar2 & 0x10) == 0)) {
    uVar2 = FUN_0033b5d0();
    if (((uVar2 & 0x80) == 0) || (uVar2 = FUN_0033b5d0(), (uVar2 & 0x10) == 0)) {
      uVar2 = FUN_0033b5d0();
      if (((uVar2 & 0x80) == 0) || (uVar2 = FUN_0033b5d0(), (uVar2 & 0x20) == 0)) {
        uVar2 = FUN_0033b5d0();
        if (((uVar2 & 0x40) == 0) || (uVar2 = FUN_0033b5d0(), (uVar2 & 0x20) == 0)) {
          uVar2 = FUN_0033b5d0();
          if ((uVar2 & 0x40) == 0) {
            uVar2 = FUN_0033b5d0();
            if ((uVar2 & 0x10) == 0) {
              uVar2 = FUN_0033b5d0();
              if ((uVar2 & 0x80) == 0) {
                uVar2 = FUN_0033b5d0();
                if ((uVar2 & 0x20) == 0) goto code_r0x00438884;
                iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 6);
              }
              else {
                iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 4);
              }
            }
            else {
              iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 2);
            }
          }
          else {
            iVar3 = (int)**(char **)(iVar3 + *(int *)(iVar1 + 0x20) * 4);
          }
        }
        else {
          iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 7);
        }
      }
      else {
        iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 5);
      }
    }
    else {
      iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 3);
    }
  }
  else {
    iVar3 = (int)*(char *)(*(int *)(iVar3 + *(int *)(iVar1 + 0x20) * 4) + 1);
  }
  if (iVar3 != -1) {
    FUN_0037547c(DAT_00438960,0,4,DAT_0043895c,DAT_0043895c,DAT_00438958);
    *(int *)(iVar1 + 0x20) = iVar3;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
code_r0x00438884:
  uVar2 = FUN_0033b5ec();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0033b5ec();
    if ((uVar2 & 2) != 0) {
      FUN_002fd84c(0,1);
      *(undefined4 *)(iVar1 + 0x18) = 10;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
  }
  else {
    if ((*(uint *)(iVar1 + 0x20) < 3) && (iVar3 = FUN_002e9d78(), iVar3 != 0)) {
      FUN_002e9b4c(0,*(undefined4 *)(iVar1 + 0x20));
    }
    if ((*(int *)(iVar1 + 0x20) - 3U < 3) && (iVar3 = FUN_002e9d78(), iVar3 != 0)) {
      FUN_002e9b4c(1,*(int *)(iVar1 + 0x20) + -3);
    }
    if ((*(int *)(iVar1 + 0x20) - 6U < 3) && (iVar3 = FUN_002e9d78(), iVar3 != 0)) {
      FUN_002e9b4c(2,*(int *)(iVar1 + 0x20) + -6);
      return;
    }
  }
  return;
}
