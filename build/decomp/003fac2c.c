// OoT3D decomp @ 003fac2c  name=FUN_003fac2c  size=312

void FUN_003fac2c(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  iVar5 = (uint)*(ushort *)(((int *)param_2[1])[1] + *(short *)*param_2 * 2) + *(int *)param_2[1];
  uVar1 = *(ushort *)(iVar5 + 10);
  uVar2 = (uint)uVar1;
  piVar6 = (int *)(*(int *)(param_2[2] + 0xc) +
                  (short)(ushort)*(byte *)((short *)*param_2 + 1) * 0x1cc);
  func_0x00314308(param_1 + 0x24,*(undefined2 *)(iVar5 + 0x104));
  func_0x003142f0(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x478) = 2;
  uVar3 = 0;
  if (*(char *)(*piVar6 + 1) != '\0') {
    uVar3 = 0x200;
  }
  *(uint *)(param_1 + 0x478) = uVar3 | 2;
  uVar4 = 0;
  if (*(char *)*piVar6 != '\0') {
    uVar4 = 0x400;
  }
  uVar4 = uVar4 | uVar3 | 2;
  uVar3 = uVar2 & 4;
  if ((uVar1 & 4) != 0) {
    uVar3 = 0x20;
  }
  *(uint *)(param_1 + 0x478) = uVar4;
  uVar4 = uVar4 | uVar3;
  uVar3 = uVar2 & 8;
  if ((uVar1 & 8) != 0) {
    uVar3 = 0x40;
  }
  *(uint *)(param_1 + 0x478) = uVar4;
  uVar4 = uVar4 | uVar3;
  uVar3 = uVar2 & 0x10;
  if ((uVar1 & 0x10) != 0) {
    uVar3 = 0x80;
  }
  *(uint *)(param_1 + 0x478) = uVar4;
  uVar2 = uVar2 & 0x20;
  uVar4 = uVar4 | uVar3;
  if ((uVar1 & 0x20) != 0) {
    uVar2 = 0x100;
  }
  *(uint *)(param_1 + 0x478) = uVar4;
  *(uint *)(param_1 + 0x478) = uVar2 | uVar4;
  uStack_34 = *(undefined4 *)(iVar5 + 0x28);
  uStack_30 = *(undefined4 *)(iVar5 + 0x44);
  uStack_2c = *(undefined4 *)(iVar5 + 0x60);
  uStack_24 = *(undefined4 *)(iVar5 + 0x7c);
  uStack_20 = *(undefined4 *)(iVar5 + 0x98);
  uStack_1c = *(undefined4 *)(iVar5 + 0xb4);
  uStack_18 = uRam003fad64;
  uStack_28 = uRam003fad64;
  func_0x003142dc(param_1 + 0x24,&uStack_34);
  return;
}
