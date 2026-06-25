// OoT3D decomp @ 003551b4  name=FUN_003551b4  size=168

void FUN_003551b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if ((*(byte *)(param_1 + 0x172a) & 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined2 *)(param_1 + 0x175a) = 0;
    *(undefined2 *)(param_1 + 0x1758) = 0;
    *(undefined2 *)(param_1 + 0x1756) = 0;
    *(undefined2 *)(param_1 + 0x1754) = 0;
    *(undefined2 *)(param_1 + 0x1752) = 0;
    *(undefined2 *)(param_1 + 0x1750) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    uVar3 = *(uint *)(param_1 + 0x1710);
    bVar4 = (uVar3 & 0x8000000) == 0;
    if (!bVar4) {
      uVar3 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    if (bVar4 || uVar3 == 1) {
      FUN_0036b2d4(param_1,param_2);
    }
    else {
      FUN_002bdd68(param_2,param_1);
    }
    iVar2 = DAT_00355260;
    uVar1 = DAT_0035525c;
    if (*(byte *)(param_1 + 0x1749) < 4) {
      *(undefined *)(param_1 + 0x1749) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = uVar1;
      *(undefined *)(iVar2 + 0xd4) = 0;
    }
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xffef9fff;
  return;
}

