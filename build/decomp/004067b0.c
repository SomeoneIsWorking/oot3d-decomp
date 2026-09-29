// OoT3D decomp @ 004067b0  name=FUN_004067b0  size=480

void FUN_004067b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;

  bVar5 = *(char *)(param_1 + 9) != '\0';
  uVar2 = 0;
  if (bVar5) {
    uVar2 = (uint)*(byte *)(DAT_00406990 + param_1);
  }
  bVar6 = uVar2 != 0;
  if (bVar5 && bVar6) {
    uVar2 = *(uint *)(param_1 + 0xe4c);
  }
  if (((bVar5 && bVar6) && uVar2 != 0) && (iVar3 = FUN_0040e3c0(), iVar3 != 0)) {
    if (*DAT_00406994 != '\0') {
      *(undefined1 *)(param_1 + 0x85) = 1;
      FUN_00309854(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x89);
    bVar5 = cVar1 == '\0';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x86);
    }
    bVar6 = bVar5 && cVar1 == '\0';
    if (bVar5 && cVar1 == '\0') {
      bVar6 = *(char *)(param_1 + 0x85) == '\0';
    }
    if ((bVar6) && (*(char *)(param_1 + *(int *)(param_1 + 0xb4) * 0x18 + 0xe61) == '\x03')) {
      while ((*(int *)(param_1 + 0xfc) == 0 ||
             (*(int *)(param_1 + 200) < *(int *)(param_1 + 0xa0) + -2))) {
        do {
          iVar3 = *(int *)(param_1 + 0xb8) + 1;
          *(int *)(param_1 + 0xb8) = iVar3;
          if ((*(int *)(param_1 + 0xc0) < iVar3) && (*(char *)(param_1 + 0x49) != '\0')) {
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xbc);
            if (*(int *)(param_1 + 0x8c) != 0x7fffffff) {
              *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
            }
          }
          iVar4 = *(int *)(param_1 + 0xb4) + 1;
          *(int *)(param_1 + 0xb4) = iVar4;
          iVar3 = *(int *)(param_1 + 0xc0) + -1;
          if (*(int *)(param_1 + 0xb0) <= iVar4) {
            *(undefined4 *)(param_1 + 0xb4) = 0;
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa4);
          }
          if (*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0xb0) + -1) {
            *(undefined1 *)(param_1 + 0x88) = 0;
            *(undefined1 *)(param_1 + 0x87) = 0;
          }
          bVar5 = *(int *)(param_1 + 0xb8) == iVar3;
          if (iVar3 <= *(int *)(param_1 + 0xb8)) {
            bVar5 = *(char *)(param_1 + 0x49) == '\0';
          }
          if (bVar5) {
            *(undefined1 *)(param_1 + 0x89) = 1;
          }
          FUN_00309638(param_1);
          if (*(char *)(param_1 + *(int *)(param_1 + 0xb4) * 0x18 + 0xe61) != '\x03') {
            return;
          }
          if (*(char *)(param_1 + 0x89) != '\0') {
            return;
          }
        } while (*(char *)(param_1 + 0x85) != '\0');
      }
      *(undefined1 *)(param_1 + 0x83) = 1;
      *(undefined1 *)(param_1 + 0x85) = 1;
      if (*(char *)(param_1 + 0x84) != '\x01') {
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0xe18)) {
          do {
            iVar4 = *(int *)(param_1 + iVar3 * 0x220 + 0xe4c);
            if (iVar4 != 0) {
              FUN_0030a3d8(iVar4,1);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0xe18));
        }
        *(undefined1 *)(param_1 + 0x84) = 1;
      }
    }
  }
  return;
}
