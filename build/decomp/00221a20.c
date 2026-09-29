// OoT3D decomp @ 00221a20  name=FUN_00221a20  size=300

void FUN_00221a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = DAT_00221b4c;
  *(int *)(param_2 + 0x5c28) = DAT_00221b4c;
  puVar1 = (undefined1 *)(iVar4 + -0x44);
  iVar4 = 0x32;
  do {
    puVar1[0x44] = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 0x88;
    *puVar1 = 0;
  } while (iVar4 != 0);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined1 *)(param_1 + 0xb7) = 0x1e;
  FUN_00350eb8(param_2,param_1 + 0xb20,0,param_4,param_4);
  FUN_00350d48(param_2,param_1 + 0xb20,param_1,DAT_00221b50,param_1 + 0xb60);
  FUN_00350eb8(param_2,param_1 + 0xb40);
  FUN_00350d48(param_2,param_1 + 0xb40,param_1,DAT_00221b54,param_1 + 0x1060);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  uVar2 = FUN_0034f248(param_1,param_2);
  if (((*DAT_00221b58 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00221b58), iVar4 != 0)) {
    FUN_0036788c(DAT_00221b5c);
  }
  uVar3 = ObjectBankArchive_00372c90(uVar2,*(undefined4 *)(DAT_00221b68 + 0xf3c));
  uVar2 = DAT_00221b6c;
  *(undefined4 *)(param_1 + 0x884) = uVar3;
  uVar3 = DAT_00221b70;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined1 *)(param_1 + 0x123) = 0x3e;
  *(undefined4 *)(param_1 + 0x888) = uVar3;
  return;
}
