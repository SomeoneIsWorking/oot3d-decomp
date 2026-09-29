// OoT3D decomp @ 002ea044  name=FUN_002ea044  size=12

void FUN_002ea044(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;

  puVar3 = (undefined4 *)(param_2 + 3U & 0xfffffffc);
  uVar1 = FUN_00339384(param_3 - ((int)puVar3 - param_2),0xcc);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = puVar3;
      puVar3 = puVar3 + 0x33;
    } while (uVar2 < uVar1);
  }
  return;
}
