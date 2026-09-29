// OoT3D decomp @ 0049357c  name=FUN_0049357c  size=280

void FUN_0049357c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;

  iVar2 = FUN_002e1ef0();
  uVar6 = DAT_00493698;
  uVar1 = DAT_00493694;
  if (iVar2 != 0) {
    uVar3 = FUN_002fa240();
    FUN_00497668(uVar6);
    FUN_00497858(uVar6);
    iVar2 = FUN_00497888(uVar1);
    iVar4 = FUN_004975f4(uVar3);
    FUN_004976a4(uVar6,iVar4 + iVar2);
    iVar2 = param_1 + (uint)*(ushort *)(param_1 + 0x131c) * 8;
    uVar6 = *(undefined4 *)(DAT_0049369c + iVar2);
    uVar3 = *(undefined4 *)(iVar2 + 0x12f4);
    if (*(char *)(param_1 + 0x1348) != '\0') {
      FUN_002ce884(uVar1,0,uVar6);
      FUN_002ce884(uVar1,1,uVar3);
    }
    FUN_002c198c(uVar1,0,uVar6);
    FUN_002c198c(uVar1,1,uVar3);
    **(undefined2 **)(param_1 + (uint)*(ushort *)(param_1 + 0x131e) * 4 + 0x1098) =
         *(undefined2 *)(param_1 + 0x131a);
    *(short *)(param_1 + 0x131a) = *(short *)(param_1 + 0x131a) + 1;
    software_interrupt(0x18);
    uVar5 = *(uint *)(param_1 + 4) >> 0x1b;
    if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
      uVar5 = uVar5 - 0x20;
    }
    if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
      FUN_003351b4();
    }
    *(ushort *)(param_1 + 0x131e) = *(ushort *)(param_1 + 0x131a) & 1;
  }
  return;
}
