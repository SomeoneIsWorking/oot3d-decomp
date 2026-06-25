// OoT3D decomp @ 003589dc  name=FUN_003589dc  size=332

void FUN_003589dc(int param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  uVar1 = DAT_00358b2c;
  iVar3 = *DAT_00358b28;
  sVar5 = 0;
  *(undefined2 *)(iVar3 + 0x4a) = 2000;
  *(short *)(iVar3 + 0x74) = (short)uVar1;
  iVar4 = (int)*(char *)(param_2 + 0x1a7);
  if (iVar4 == 0) {
    if (*(int *)(DAT_00358b30 + 4) != 0) {
      iVar4 = 5;
    }
  }
  else if (iVar4 == 1) {
    if (((*(uint *)(param_2 + 0x1710) & 0x8000000) == 0) ||
       (iVar4 = 4, *(char *)(param_2 + 0x1a4) != '\x02')) {
      *(undefined2 *)(iVar3 + 0x4a) = 500;
    }
    else {
      sVar5 = 0x50;
      *(short *)(iVar3 + 0x4a) = (short)DAT_00358b34;
    }
    *(undefined2 *)(iVar3 + 0x74) = 100;
  }
  psVar2 = (short *)(DAT_00358b38 + iVar4 * 0x22);
  *(short *)(iVar3 + 0x3a) = sVar5 + *psVar2;
  *(short *)(iVar3 + 0x50) = psVar2[1];
  *(short *)(iVar3 + 0x54) = psVar2[2];
  *(short *)(iVar3 + 0x58) = psVar2[3];
  *(short *)(iVar3 + 0x5a) = psVar2[4];
  *(short *)(iVar3 + 0x5c) = psVar2[5];
  *(short *)(iVar3 + 0x5e) = psVar2[6];
  *(short *)(iVar3 + 0x60) = psVar2[7];
  *(short *)(iVar3 + 0x6a) = psVar2[8];
  *(short *)(iVar3 + 0x6e) = psVar2[9];
  *(short *)(iVar3 + 0x9c) = psVar2[10];
  *(short *)(iVar3 + 0x9e) = psVar2[0xb];
  *(short *)(iVar3 + 0x758) = psVar2[0xc];
  *(short *)(iVar3 + 0x75a) = psVar2[0xd];
  *(short *)(iVar3 + 0x75c) = psVar2[0xe];
  *(short *)(iVar3 + 0x75e) = psVar2[0xf];
  *(short *)(iVar3 + 0x492) = psVar2[0x10];
  if ((*(char *)(param_1 + 0x4c33) == '\x02') && (iVar4 != 1)) {
    *(undefined2 *)(iVar3 + 0x6e) = 500;
  }
  return;
}

