// OoT3D decomp @ 004967ac  name=FUN_004967ac  size=288

void FUN_004967ac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar4 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar4 != 0) {
    FUN_002c0948(param_1,param_2);
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    return;
  }
  iVar4 = FUN_0036b1e0(DAT_004968cc,param_1 + 0x254);
  if (iVar4 != 0) {
    if (((*(uint *)(DAT_004968d0 + 0x140) & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_004968d4), puVar3 = DAT_004968e0, uVar2 = DAT_004968dc,
       uVar1 = DAT_004968d8, iVar4 != 0)) {
      *DAT_004968e0 = DAT_004968d8;
      puVar3[1] = uVar1;
      puVar3[2] = uVar2;
    }
    FUN_0034711c(param_2,param_1,param_1 + 0x1228,DAT_004968e0);
    FUN_0035e580(param_2,param_1,0x14,0x1e);
    FUN_0036f59c(param_1,DAT_004968e4);
    FUN_0036f59c(param_1,DAT_004968e8);
    return;
  }
  iVar4 = FUN_0036b1e0(DAT_004968ec,param_1 + 0x254);
  if (iVar4 != 0) {
    *(undefined2 *)(DAT_004968f0 + 0xb2) = 0x140;
    *(undefined1 *)(param_2 + 0x7f40) = 0xd3;
  }
  return;
}
