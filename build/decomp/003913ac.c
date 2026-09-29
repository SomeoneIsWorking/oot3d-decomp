// OoT3D decomp @ 003913ac  name=FUN_003913ac  size=148

void FUN_003913ac(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined8 uVar6;

  uVar6 = FUN_0037571c(param_2);
  uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
  bVar4 = (int)uVar6 != 0;
  puVar2 = (ushort *)0x0;
  if (bVar4) {
    puVar2 = *(ushort **)(param_2 + 0x22ec);
  }
  if (bVar4 && puVar2 != (ushort *)0x0) {
    uVar3 = (uint)*puVar2;
  }
  if ((bVar4 && puVar2 != (ushort *)0x0) && uVar3 != 1) {
    uVar5 = VectorSignedToFloat(*(undefined4 *)(puVar2 + 6),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(puVar2 + 8),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(puVar2 + 10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    uVar1 = puVar2[4];
    *(ushort *)(param_1 + 0xbe) = uVar1;
    *(ushort *)(param_1 + 0x36) = uVar1;
    *(undefined4 *)(param_1 + 0xbbc) = 1;
    *(undefined4 *)(param_1 + 3000) = 0x16;
  }
  if (*(int *)(param_1 + 3000) != 0x2e) {
    *(undefined4 *)(param_1 + 3000) = 0x2f;
  }
  return;
}
