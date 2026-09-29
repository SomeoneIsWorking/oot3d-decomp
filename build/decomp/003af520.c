// OoT3D decomp @ 003af520  name=FUN_003af520  size=76

void FUN_003af520(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003705a0(*(float *)(param_1 + 0xc) + DAT_003af56c,DAT_003af570,param_1 + 0x2c);
  uVar2 = DAT_003af57c;
  uVar1 = DAT_003af574;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003af578;
    FUN_00375bcc(param_1,uVar2);
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}
