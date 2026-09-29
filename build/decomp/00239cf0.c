// OoT3D decomp @ 00239cf0  name=FUN_00239cf0  size=260

void FUN_00239cf0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  if (((*DAT_00239df4 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00239df4), iVar3 != 0)) {
    FUN_0036788c(DAT_00239df8);
  }
  uVar2 = DAT_00239e18;
  iVar3 = DAT_00239e08;
  if ((*(char *)(*(int *)(DAT_00239e04 + 0x2d4) + 8) == '\x11') &&
     (cVar1 = *(char *)(*(int *)(DAT_00239e04 + 0x2d4) + 9), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      *(undefined2 *)(DAT_00239e08 + 0xb2) = 0;
      *(undefined2 *)(iVar3 + 0x80) = 0;
      *(undefined2 *)(iVar3 + 0x82) = 0;
      *(undefined2 *)(iVar3 + 0x84) = 0;
      *(short *)(iVar3 + 0x86) = (short)*(char *)(iVar3 + -0x14b9);
      uVar2 = DAT_00239e0c;
      *(undefined1 *)(iVar3 + -0x14b9) = 0;
      *(undefined1 *)(iVar3 + -0x14ba) = 0;
      *(undefined1 *)(param_1 + 0x101) = 0;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = DAT_00239e10;
      FUN_00331754(0);
      iVar3 = DAT_00239e14;
      *(undefined4 *)(DAT_00239e14 + 0x5b8) = 0;
      *(undefined1 *)(iVar3 + 0x5bc) = 0;
    }
    else {
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x101) = 0;
        *(undefined4 *)(param_1 + 0xc) = uVar2;
        *(undefined4 *)(param_1 + 0x10) = 0x2e8;
        FUN_00331754(0);
        return;
      }
      if (cVar1 == '\x03') {
        FUN_00344930(param_1,0);
        return;
      }
    }
  }
  return;
}
