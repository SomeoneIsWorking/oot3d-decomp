// OoT3D decomp @ 0033704c  name=FUN_0033704c  size=352

void FUN_0033704c(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;

  iVar2 = DAT_003371b4;
  cVar1 = *(char *)(DAT_003371ac + 0x78c);
  if ((cVar1 != -1) && (DAT_003371b0 == param_1 * 0x100000)) {
    param_1 = param_1 | 0x1000;
  }
  if ((((param_1 == 0xcfff) && (uVar5 = DAT_003371b8, cVar1 != -1)) ||
      ((param_1 == 0xfff && (uVar5 = DAT_003371bc, cVar1 != -1)))) ||
     (uVar5 = param_1, param_1 != 0xffff)) {
    *(uint *)(DAT_003371b4 + 0x94) = uVar5 + 0x80000000;
    *(undefined1 *)(iVar2 + 0x3c) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0xe;
    if (uVar5 != 0xa000) {
      *(undefined1 *)(iVar2 + 0x3d) = 0xd;
    }
    *(ushort *)(iVar2 + 0x50) = (ushort)uVar5 & 0x3fff;
    *(undefined1 *)(iVar2 + 0x2c) = 8;
    iVar8 = DAT_003371c0;
    *(undefined1 *)(iVar2 + 0x3b) = 0;
    *(undefined1 *)(iVar2 + 0x2b) = 0;
    if (uVar5 + 0x80000000 == 0) {
      uVar4 = 0xff;
    }
    else {
      uVar4 = 0xfe;
    }
    *(undefined1 *)(iVar2 + 0x3e) = 0;
    *(undefined1 *)(iVar8 + 1) = uVar4;
    *(undefined1 *)(iVar2 + 0x14) = 1;
    uVar3 = DAT_003371c4;
    *(undefined2 *)(iVar2 + 0x46) = 0;
    FUN_0032b184(uVar3,0x1c);
    FUN_0032b184(DAT_003371c8,0x1c);
    FUN_0032b184(DAT_003371cc,0x1c);
    FUN_00343280(DAT_003371d0,0xe);
    if ((uVar5 & 0x8000) != 0) {
      *(undefined1 *)(iVar2 + 0x2c) = 0;
    }
    if ((uVar5 & 0x4000) != 0) {
      *(undefined1 *)(iVar2 + 0x3a) = 0;
    }
    iVar2 = DAT_003371d4;
    if ((uVar5 & 0xd000) != 0) {
      uVar5 = 0;
      uVar6 = 0;
      iVar8 = DAT_003371d4 + 0x4a0;
      do {
        uVar7 = (uint)*(byte *)(iVar2 + uVar6 * 8);
        uVar6 = uVar6 + 1 & 0xff;
        if (uVar7 != 0xff) {
          iVar9 = iVar2 + uVar5;
          uVar5 = uVar5 + 1 & 0xff;
          *(undefined1 *)(iVar9 + 0x51d) = *(undefined1 *)(iVar8 + uVar7);
        }
      } while (uVar5 < 8 && uVar6 < 0x10);
    }
  }
  else {
    *(undefined4 *)(DAT_003371b4 + 0x94) = 0;
    *(undefined1 *)(iVar2 + 0x14) = 0;
  }
  return;
}
