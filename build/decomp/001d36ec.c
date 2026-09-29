// OoT3D decomp @ 001d36ec  name=FUN_001d36ec  size=168

void FUN_001d36ec(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  puVar3 = DAT_001d379c;
  iVar2 = DAT_001d3798;
  puVar1 = DAT_001d3794;
  iVar6 = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_001d3794), iVar4 != 0)) {
      FUN_0036788c(DAT_001d37a0);
    }
    iVar4 = param_1 + iVar6 * 4;
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(iVar4 + 0x5c4));
    *(undefined4 *)(iVar4 + 0x5c4) = 0;
    if (*(int *)(iVar4 + 0x5c0) != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3,uVar5);
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0x5c0) = 0;
  } while (iVar6 < 1);
  return;
}
