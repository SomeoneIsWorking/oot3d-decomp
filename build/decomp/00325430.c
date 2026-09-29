// OoT3D decomp @ 00325430  name=FUN_00325430  size=168

void FUN_00325430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;

  uVar5 = 0;
  if (*(char *)(param_2 + 6) != '\0') {
    do {
      iVar1 = param_2 + uVar5 * 0x3c;
      iVar2 = param_1 + (uint)*(byte *)(param_1 + 0x5407) * 0x3c;
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      uVar6 = *(undefined4 *)(iVar1 + 0x14);
      *(undefined4 *)(iVar2 + 0x5408) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(iVar2 + 0x540c) = uVar3;
      *(undefined4 *)(iVar2 + 0x5410) = uVar4;
      *(undefined4 *)(iVar2 + 0x5414) = uVar6;
      uVar3 = *(undefined4 *)(iVar1 + 0x1c);
      uVar4 = *(undefined4 *)(iVar1 + 0x20);
      uVar6 = *(undefined4 *)(iVar1 + 0x24);
      *(undefined4 *)(iVar2 + 0x5418) = *(undefined4 *)(iVar1 + 0x18);
      *(undefined4 *)(iVar2 + 0x541c) = uVar3;
      *(undefined4 *)(iVar2 + 0x5420) = uVar4;
      *(undefined4 *)(iVar2 + 0x5424) = uVar6;
      uVar3 = *(undefined4 *)(iVar1 + 0x2c);
      uVar4 = *(undefined4 *)(iVar1 + 0x30);
      uVar6 = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(iVar2 + 0x5428) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0x542c) = uVar3;
      *(undefined4 *)(iVar2 + 0x5430) = uVar4;
      *(undefined4 *)(iVar2 + 0x5434) = uVar6;
      uVar3 = *(undefined4 *)(iVar1 + 0x3c);
      uVar4 = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar2 + 0x5438) = *(undefined4 *)(iVar1 + 0x38);
      *(undefined4 *)(iVar2 + 0x543c) = uVar3;
      *(undefined4 *)(iVar2 + 0x5440) = uVar4;
      *(char *)(param_1 + 0x5407) = *(char *)(param_1 + 0x5407) + '\x01';
      *(undefined1 *)(param_1 + 0x5405) = 1;
      *(undefined1 *)(param_1 + 0x5406) = *(undefined1 *)(param_2 + 0x3d4);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      uVar5 = uVar5 + 1 & 0xff;
      *(undefined4 *)(iVar1 + 8) = 0;
    } while (uVar5 < *(byte *)(param_2 + 6));
  }
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}
