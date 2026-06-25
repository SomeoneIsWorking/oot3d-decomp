// OoT3D decomp @ 002bf67c  name=FUN_002bf67c  size=396

int FUN_002bf67c(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int local_18;
  
  uVar1 = DAT_002bf808;
  iVar4 = (int)*(short *)(param_1 + 0xbe);
  sVar3 = *(short *)(param_1 + 0x48);
  if (param_2 == 0) {
    sVar3 = FUN_002bc39c(param_1 + 0x1750,(int)sVar3,600,DAT_002bf808,DAT_002bf808,(int)sVar3,0);
    FUN_002bc39c(param_1 + 0x1756,(int)sVar3,200,4000,4000,(int)*(short *)(param_1 + 0x1750),uVar1);
    sVar3 = 1;
    local_18 = (uint)*(ushort *)(param_1 + 0x4a) - iVar4;
    if ((*(uint *)(DAT_002bf80c + param_1) & 0x800000) == 0) {
      FUN_002bc39c(&local_18,0,200,DAT_002bf810,DAT_002bf810,(int)*(short *)(param_1 + 0x1758),8000)
      ;
      iVar4 = (int)(short)(*(short *)(param_1 + 0x4a) - (short)local_18);
    }
    else {
      sVar3 = 3;
      FUN_002bc39c(&local_18,0,200,DAT_002bf810,DAT_002bf810,(int)*(short *)(param_1 + 0x1758),8000)
      ;
    }
    FUN_002bc39c(param_1 + 0x1752,(int)(short)((short)local_18 - *(short *)(param_1 + 0x1758)),
                 sVar3 * 200,8000,8000,(int)(short)local_18,8000);
    FUN_002bc39c(param_1 + 0x1758,(int)(short)local_18,sVar3 * 200,8000,8000,
                 (int)*(short *)(param_1 + 0x1752),8000);
    uVar2 = *(ushort *)(param_1 + 0x174a) | 0xd9;
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x1756) = sVar3;
    uVar2 = *(ushort *)(param_1 + 0x174a) | 0x41;
  }
  *(ushort *)(param_1 + 0x174a) = uVar2;
  return iVar4;
}

