// OoT3D decomp @ 0018bf6c  name=FUN_0018bf6c  size=576

void FUN_0018bf6c(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  undefined4 uVar7;

  FUN_003510b0(param_1,DAT_0018c1ac);
  FUN_0037572c(DAT_0018c1b0,param_1);
  uVar1 = DAT_0018c1c0;
  *(undefined4 *)(param_1 + 0x70) = DAT_0018c1b4;
  FUN_00372d4c(uVar1,DAT_0018c1b8,param_1 + 0xbc,DAT_0018c1bc);
  *(undefined1 *)(param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  fVar2 = DAT_0018c1c4;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar2;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018c1c8 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
  FUN_00358ea8(iVar4 + 0x10,param_2,param_1 + 0x1b8,uVar5);
  FUN_0035c358(param_1 + 0xc00,param_1 + 0x1b8,0);
  puVar3 = DAT_0018c1cc;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  FUN_00373d40(param_1 + 0x1b8,*puVar3);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0xddc,param_1,puVar3 + 5);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0xe34,param_1,puVar3 + 0x13);
  FUN_00350d20(param_1 + 0xa0,0,puVar3 + -4);
  iVar4 = DAT_0018c1d0;
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  *(undefined1 *)(param_1 + 0xdd4) = 0;
  uVar5 = DAT_0018c1d4;
  if ((*(int *)(iVar4 + 0x4e8) < 4) && (*(short *)(param_2 + 0x104) == 99)) {
    iVar4 = FUN_00350cf4(0x14);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(uint *)(param_1 + 0xea4) = *(ushort *)(DAT_0018c1d8 + 0xee) & 0x40;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 3;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x1a5) = 0;
  uVar6 = FUN_0036ae14(param_1 + 0x1b8,*puVar3);
  uVar7 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = FUN_00348854(param_1);
  FUN_00375c08(uVar6,uVar1,uVar7,uVar5,param_1 + 0x1b8,puVar3[*(byte *)(param_1 + 0x1a5)],2);
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}
