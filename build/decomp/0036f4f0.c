// OoT3D decomp @ 0036f4f0  name=FUN_0036f4f0  size=344

void FUN_0036f4f0(int param_1)

{
  uint uVar1;
  undefined uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  
  puVar5 = DAT_0036f570;
  iVar6 = *(int *)(param_1 + 0x20ac);
  if (*(short *)(param_1 + 0x104) != 0x3c && *(short *)(param_1 + 0x104) != 0x3e) {
    uVar3 = *(undefined2 *)(iVar6 + 0xbe);
    uVar2 = *(undefined *)(DAT_0036f574 + param_1);
    *(short *)(DAT_0036f570 + 0x540) = (short)*DAT_0036f570;
    *(undefined *)((int)puVar5 + 0x1502) = uVar2;
    uVar7 = *(undefined4 *)(iVar6 + 0x2c);
    uVar9 = *(undefined4 *)(iVar6 + 0x30);
    puVar5[0x53c] = *(undefined4 *)(iVar6 + 0x28);
    puVar5[0x53d] = uVar7;
    puVar5[0x53e] = uVar9;
    uVar7 = DAT_0036f578;
    *(undefined2 *)(puVar5 + 0x53f) = uVar3;
    *(short *)((int)puVar5 + 0x14fe) = (short)uVar7;
    puVar5[0x541] = *(undefined4 *)(param_1 + 0x222c);
    puVar5[0x542] = *(undefined4 *)(param_1 + 0x2248);
  }
  iVar6 = DAT_00496d34;
  piVar8 = (int *)(DAT_00496d34 + -0x1000);
  *(undefined4 *)(DAT_00496d34 + 0x4ec) = 0xffffffff;
  sVar4 = *(short *)(param_1 + 0x104);
  if (((sVar4 == 0xe || sVar4 == 0x1a) || sVar4 == 0xf) || sVar4 == 0x4f) {
    FUN_003716f0(param_1,DAT_00496d38,0x14,2);
    uVar1 = *(int *)(DAT_00496d3c + 4) << *DAT_00496d40;
    if ((uVar1 & *(ushort *)(iVar6 + -0xf4a)) == 0) {
      *(ushort *)(iVar6 + -0xf4a) = (ushort)uVar1 | *(ushort *)(iVar6 + -0xf4a);
      *(undefined *)(iVar6 + -0xf80) = 0x3c;
      *(ushort *)(iVar6 + -0xf76) = *(ushort *)(iVar6 + -0xf76) & 0xfff0 | 2;
    }
    return;
  }
  iVar6 = *piVar8;
  bVar10 = iVar6 == 0x28a || iVar6 == 0x28e;
  if (iVar6 != 0x28a && iVar6 != 0x28e) {
    bVar10 = iVar6 == 0x292;
  }
  if (!bVar10) {
    bVar10 = iVar6 == 0x476;
  }
  if (!bVar10) {
    FUN_003716f0(param_1,(int)(short)iVar6,0x14,2);
    return;
  }
  FUN_003716f0(param_1,DAT_00496d44,0x14,2);
  return;
}

