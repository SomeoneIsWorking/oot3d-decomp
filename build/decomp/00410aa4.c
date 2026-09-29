// OoT3D decomp @ 00410aa4  name=FUN_00410aa4  size=180

void FUN_00410aa4(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_28 [16];

  puVar1 = DAT_00410b58;
  *(undefined4 *)(*(int *)(param_2 + 0xf0) + 0xe0) = 0;
  iVar2 = DAT_00410b5c;
  uVar4 = 0;
  *(undefined4 *)(*(int *)(param_2 + 0xf0) + 0xdc) = 0xfffffffa;
  *(undefined1 *)(*(int *)(param_2 + 0xf0) + 0x18) = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00410b58), iVar3 != 0)) {
      FUN_0036788c(DAT_00410b60);
    }
    FUN_0041012c(iVar2 + 0x44,4,uVar4 & 0xff,auStack_28);
    FUN_00303db4(*(undefined4 *)(param_2 + 0xf0),uVar4 & 0xff,auStack_28);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 8);
  return;
}
