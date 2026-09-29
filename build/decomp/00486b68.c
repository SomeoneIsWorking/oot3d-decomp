// OoT3D decomp @ 00486b68  name=FUN_00486b68  size=116

void FUN_00486b68(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;

  bVar3 = *(char *)(param_1 + 8) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 9);
  }
  if (bVar3 && cVar1 != '\0') {
    uVar2 = FUN_0030c7cc();
    FUN_00309bdc(uVar2,param_1 + 0x48);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  *(undefined1 *)(param_1 + 0x70) = param_4;
  *(undefined4 *)(param_1 + 0x74) = param_5;
  uVar2 = FUN_00309b60();
  FUN_00308b70(uVar2,param_1 + 0x3c);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}
