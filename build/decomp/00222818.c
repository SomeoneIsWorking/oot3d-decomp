// OoT3D decomp @ 00222818  name=FUN_00222818  size=276

void FUN_00222818(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  bool bVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined8 uVar7;

  FUN_003731e0(param_1 + 0x1a4);
  uVar6 = DAT_0022292c;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar6,param_2,param_1,param_1 + 0x1a4);
  uVar7 = FUN_0037571c(param_2);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  bVar5 = (int)uVar7 != 0;
  if (bVar5) {
    iVar2 = *(int *)(param_2 + 0x22f8);
  }
  puVar4 = (ushort *)0x0;
  if (!bVar5) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    uVar1 = *(undefined2 *)(iVar2 + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
  }
  FUN_00376340(DAT_00222930,DAT_00222934,DAT_00222930,param_2,param_1,7);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    puVar4 = *(ushort **)(param_2 + 0x22f8);
  }
  if ((puVar4 != (ushort *)0x0) && (uVar3 = (uint)*puVar4, uVar3 != *(uint *)(param_1 + 0x1274))) {
    if (uVar3 == 2) {
      FUN_0033391c(DAT_00222938,param_1,0xc,2,0);
      *(undefined4 *)(param_1 + 0x126c) = 0x14;
    }
    *(uint *)(param_1 + 0x1274) = uVar3;
  }
  return;
}
