// OoT3D decomp @ 00241f00  name=FUN_00241f00  size=860

void FUN_00241f00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  undefined4 uStack_178;
  undefined4 local_174 [80];

  uVar1 = FUN_00372f38(param_1,param_2,0);
  if (((*DAT_0024225c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0024225c), iVar2 != 0)) {
    FUN_0036788c(DAT_00242260);
  }
  uVar3 = ObjectBankArchive_00372c90(uVar1,*(undefined4 *)(DAT_0024226c + 0xf3c));
  *(undefined4 *)(param_1 + 0x368) = uVar3;
  *(int *)(DAT_00242270 + param_2) = param_1 + 0x1020;
  FUN_003510b0(param_1,DAT_00242274);
  uVar3 = DAT_00242280;
  FUN_00372d4c(DAT_00242280,DAT_00242278,param_1 + 0xbc,DAT_0024227c);
  FUN_0037572c(DAT_00242284,param_1);
  iVar2 = DAT_00242288;
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,2,*(undefined4 *)(DAT_00242288 + 4),0,0,0);
  puVar4 = &uStack_178;
  iVar7 = 0x28;
  *(undefined1 *)(param_1 + 0x219) = 0;
  do {
    puVar4[1] = 3;
    iVar7 = iVar7 + -1;
    puVar4 = puVar4 + 2;
    *puVar4 = 3;
  } while (iVar7 != 0);
  FUN_00352ee0(param_1,param_2,0x50,param_1 + 0x228,local_174);
  uVar5 = FUN_00372f0c(uVar1,1);
  uVar1 = DAT_0024228c;
  iVar7 = 0;
  do {
    iVar8 = param_1 + iVar7 * 4;
    *(undefined4 *)(param_1 + iVar7 * 0x34 + 0x1050) = *(undefined4 *)(iVar8 + 0x228);
    FUN_00372d94(*(undefined4 *)(*(int *)(iVar8 + 0x228) + 0xc),uVar5);
    iVar7 = iVar7 + 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x228) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x228) + 0xc) + 0xc) = uVar1;
  } while (iVar7 < 0x50);
  FUN_003490e0(param_1 + 0x1a4,DAT_00242290);
  uVar5 = DAT_00242294;
  *(undefined4 *)(param_1 + 0x7c8) = DAT_00242294;
  uVar6 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar2 + 4));
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(uVar5,uVar1,uVar6,DAT_00242298,param_1 + 0x1a4,DAT_00242290,0);
  uVar1 = DAT_002422a0;
  *(undefined4 *)(param_1 + 0x760) = DAT_0024229c;
  *(undefined2 *)(param_1 + 0x76c) = 0;
  *(undefined2 *)(param_1 + 0x78c) = 1;
  *(undefined2 *)(param_1 + 0x764) = 0xc;
  *(undefined4 *)(param_1 + 0x7ec) = uVar1;
  *(undefined4 *)(param_1 + 0x7f0) = DAT_002422a4;
  *(undefined4 *)(param_1 + 0x7f4) = DAT_002422a8;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x7f8) = uVar3;
  FUN_00350eb8(param_2,param_1 + 0xa10);
  FUN_00350d48(param_2,param_1 + 0xa10,param_1,DAT_002422ac,param_1 + 0xa30);
  iVar2 = FUN_0035b164();
  if ((iVar2 != 1) &&
     (iVar2 = FUN_0036cf6c(param_2,(int)*(char *)(DAT_002422b0 + param_2)), iVar2 != 0)) {
    FUN_003309e0(param_1,param_2,1);
    FUN_00374428(param_1);
    uVar5 = DAT_002422bc;
    uVar3 = DAT_002422b8;
    uVar1 = DAT_002422b4;
    iVar2 = param_2 + 0x208c;
    FUN_0036aa20(DAT_002422bc,DAT_002422b8,DAT_002422b4,iVar2,param_1,param_2,0x5d,0,0,0,0);
    z_actor_003738d0(uVar5,uVar3,uVar1,iVar2,param_2,0x59,0,0,0,0x6000,1);
    z_actor_003738d0(DAT_002422c0,uVar3,uVar1,iVar2,param_2,0x5f,0,0,0,0,1);
  }
  iVar2 = DAT_002422c4;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  *(undefined1 *)(iVar2 + param_1) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
