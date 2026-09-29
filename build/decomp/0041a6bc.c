// OoT3D decomp @ 0041a6bc  name=FUN_0041a6bc  size=268

void FUN_0041a6bc(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  cVar1 = *(char *)(param_1 + 0x108);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x108) = 2;
  }
  else if (cVar1 == '\x01') {
    iVar5 = FUN_004222f8();
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x101) = 0;
      iVar5 = DAT_0041a7e8;
      *(undefined4 *)(DAT_0041a7e8 + 0x558) = 0xff;
      *(undefined1 *)(iVar5 + 0x56e) = 0xff;
      *(undefined4 *)(iVar5 + 0x4e4) = 1;
      *(undefined4 *)(param_1 + 0xc) = DAT_0041a7ec;
      *(undefined4 *)(param_1 + 0x10) = 0x2e8;
      FUN_00331754(0);
      return;
    }
  }
  else if ((cVar1 == '\x02') &&
          (iVar5 = FUN_00428e98(*(undefined4 *)(param_1 + 0x104),param_1), iVar5 != 0)) {
    if (((*DAT_0041a7c8 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0041a7c8), iVar5 != 0)) {
      FUN_0036788c(DAT_0041a7cc);
    }
    uVar4 = DAT_0041a7e4;
    uVar3 = DAT_0041a7e0;
    uVar2 = DAT_0041a7dc;
    iVar5 = DAT_0041a7d8;
    *(undefined1 *)(DAT_0041a7d8 + 9) = 1;
    FUN_00301680(uVar4,uVar3,uVar2,iVar5,1);
    *(undefined1 *)(iVar5 + 0x21) = 1;
    FUN_004222a0();
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return;
}
