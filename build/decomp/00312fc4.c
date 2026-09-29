// OoT3D decomp @ 00312fc4  name=FUN_00312fc4  size=144

void FUN_00312fc4(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  pcVar1 = DAT_00313054;
  if (*DAT_00313054 == '\0') {
    *(undefined4 *)(DAT_00313054 + 4) = param_1;
    *(undefined4 *)(pcVar1 + 0xb8) = param_2;
    uVar2 = FUN_003284a4(0x20000);
    uVar3 = FUN_003284a4(0x30000);
    uVar4 = FUN_00328450(0x20000);
    uVar5 = FUN_00328450(0x30000);
    FUN_00328428(pcVar1 + 8,*(undefined4 *)(pcVar1 + 4),param_2,0x100);
    FUN_003283d4(pcVar1 + 0x60,uVar2,uVar4);
    FUN_003283d4(pcVar1 + 0x8c,uVar3,uVar5);
    *pcVar1 = '\x01';
  }
  return;
}
