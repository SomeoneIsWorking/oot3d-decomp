// OoT3D decomp @ 0036c494  name=FUN_0036c494  size=136

void FUN_0036c494(int param_1,int param_2,undefined2 param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar3 = DAT_0036c51c;
  iVar4 = *(int *)(param_1 + 0x20ac);
  if (*(short *)(param_1 + 0x104) != 0x3c && *(short *)(param_1 + 0x104) != 0x3e) {
    uVar2 = *(undefined2 *)(iVar4 + 0xbe);
    uVar1 = *(undefined *)(param_1 + 0x4c30);
    *(short *)(DAT_0036c51c + param_2 * 7 + 0x540) = (short)*DAT_0036c51c;
    *(undefined *)((int)puVar3 + param_2 * 0x1c + 0x1502) = uVar1;
    uVar5 = *(undefined4 *)(iVar4 + 0x2c);
    uVar6 = *(undefined4 *)(iVar4 + 0x30);
    puVar3[param_2 * 7 + 0x53c] = *(undefined4 *)(iVar4 + 0x28);
    puVar3[param_2 * 7 + 0x53d] = uVar5;
    puVar3[param_2 * 7 + 0x53e] = uVar6;
    *(undefined2 *)(puVar3 + param_2 * 7 + 0x53f) = uVar2;
    *(undefined2 *)((int)puVar3 + param_2 * 0x1c + 0x14fe) = param_3;
    puVar3[param_2 * 7 + 0x541] = *(undefined4 *)(param_1 + 0x222c);
    puVar3[param_2 * 7 + 0x542] = *(undefined4 *)(param_1 + 0x2248);
  }
  return;
}

