// OoT3D decomp @ 004c71dc  name=FUN_004c71dc  size=700

void FUN_004c71dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 auStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 auStack_f8 [52];
  
  func_0x00371738(auStack_110 + 6,uRam004c7498,0xd0);
  iVar4 = iRam004c74a8;
  iVar1 = iRam004c749c;
  iVar7 = *(int *)(iRam004c749c + 4);
  if (*(char *)(param_1 + 0x1b4) == '\a') {
    auStack_110[2] = *puRam004c74a0;
    auStack_110[3] = puRam004c74a0[1];
    uStack_100 = puRam004c74a0[2];
    uStack_fc = puRam004c74a0[3];
    iVar4 = *(char *)(param_1 + 0x1ac) + -0x1e;
    if ((iVar4 < 0) || (0xc < iVar4)) {
      iVar4 = -1;
    }
    if (iVar4 == -1) {
      iVar4 = *(char *)(param_1 + 0x1a9) + -0x1e;
      if ((iVar4 < 0) || (0xc < iVar4)) {
        iVar4 = -1;
      }
      if (iVar4 == -1) {
        iVar4 = 0;
      }
    }
    auStack_110[0] = *(undefined4 *)(iRam004c74a4 + 4);
    auStack_110[1] = *(undefined4 *)(iRam004c74a4 + 8);
    func_0x0033dd8c(auStack_110[iVar4 * 4 + 6],auStack_110[iVar4 * 4 + 7],auStack_110[iVar4 * 4 + 8]
                    ,auStack_110[iVar4 * 4 + 9],param_1 + 0x254,(int)(char)auStack_110[iVar7],3,0);
    func_0x002b7cf4(param_1,auStack_110[*(int *)(iVar1 + 4) * 2 + 2]);
    FUN_002b9bf8(param_1,auStack_110[*(int *)(iVar1 + 4) * 2 + 3],1);
    goto LAB_004c737c;
  }
  iVar5 = *(int *)(param_1 + 0x1c0);
  if (*(int *)(iRam004c74a8 + 0x3c) == 4) {
    if (*(short *)(iRam004c749c + 0x4a) != 0) {
LAB_004c7318:
      if ((*(uint *)(iRam004c74ac + param_1) & 0x10000) != 0) goto LAB_004c7328;
      if (((*(char *)(param_1 + 0x1b4) != '\0') || (*(int *)(param_1 + 0x6c) < 0x40000001)) ||
         ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0)) goto LAB_004c736c;
      uVar6 = 1;
      iVar5 = iRam004c74b4 + iVar7 * 4;
      goto LAB_004c7368;
    }
    iVar5 = iVar5 + 0x10;
  }
  else {
    if ((*(int *)(iRam004c74a8 + 0x3c) != 6) || ((*(uint *)(param_1 + 0x1710) & 0x2000000) == 0))
    goto LAB_004c7318;
LAB_004c7328:
    uVar6 = 0;
    iVar5 = iRam004c74b0 + iVar7 * 4;
LAB_004c7368:
    *(undefined4 *)(iRam004c74a8 + 0x3c) = uVar6;
  }
LAB_004c736c:
  func_0x002b7cf4(param_1,*(undefined4 *)(iVar5 + *(int *)(iVar4 + 0x38) * 4));
LAB_004c737c:
  uVar3 = uRam004c74c0;
  uVar2 = uRam004c74bc;
  uVar6 = uRam004c74b8;
  if (*(char *)(iVar1 + 0x52) == '\0') {
    func_0x0033dd8c(uRam004c74c8,uRam004c74c4,uRam004c74b8,uRam004c74b8,param_1 + 0x254,7,4,0);
    func_0x0033dd8c(uRam004c74cc,uRam004c74cc,uRam004c74cc,uVar6,param_1 + 0x254,8,4,0);
    func_0x0033dd8c(uRam004c74d8,uRam004c74d4,uRam004c74d0,uVar6,param_1 + 0x254,10,4,0);
  }
  else {
    func_0x0033dd8c(uRam004c74b8,uRam004c74c0,uRam004c74bc,uRam004c74b8,param_1 + 0x254,7,4,0);
    func_0x0033dd8c(uVar6,uVar3,uVar2,uVar6,param_1 + 0x254,8,4,0);
    func_0x0033dd8c(uVar6,uVar6,uVar6,uVar6,param_1 + 0x254,10,4,0);
  }
  if (*(char *)(param_1 + 0x1ac) == '\x06') {
    FUN_002b9bf8(param_1,0x17,1);
  }
  return;
}

